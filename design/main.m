[input, fs] = load_audio("ichika.mp3", 9);
audio_block_size = 1000;
frames = to_frames(input, audio_block_size);
[~, frame_count] = size(frames);
%peak_freqs = wah_freqs(5, 300, 700, audio_block_size , frame_count, fs);
%peak_freqs = peak_freqs.';

env = envelope(input, 10000, 'peak');
env(1:924) = ones(924,1)*0.25;
env = normalize(env, 'range', [100 400]);
[b,a] = butter(4, 1/(fs/2));
env_lp = filter(b,a,env);
n = floor(length(env_lp) / frame_count);
env_lp = downsample(env_lp, n);
plot(env_lp)
peak_freqs = env_lp;
Q = 10;

y = [];
zf1 = [];
zf2 = [];
% Actual simulation loop
for loop_i = 1:frame_count
    sample = frames(:, loop_i);
    peak_freq = peak_freqs(loop_i);    
        
    [b,a] = peak_filter(peak_freq, peak_freq / Q, fs);
    [y_peak, zf1] = filter(b,a,sample,zf1);
    
    y_frame = y_peak;
    y = [y; y_frame];
end
sound(y, fs, 16);
audiowrite('output.wav', y, fs);