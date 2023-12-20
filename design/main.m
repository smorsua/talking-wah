[input, fs] = load_audio("jazz.mp3", 5, 3);

audio_block_size = 1000;
[frames, frame_count] = to_frames(input, audio_block_size);

% [env, ~] = envelope(input, 1000, 'peak');
% env = env - mean(env); % Remove DC
% % env = 10 .^env;

env = fullwave_env(input, fs);
env = attack_release_filter(env, 0.01, 0.1, fs);
peak_freqs = normalize(env, 'range', [200, 1000]);
n = floor(length(peak_freqs) / frame_count);
peak_freqs = downsample(peak_freqs, n);

Q = 6;
mix = 0.8;
gain = 3;

% Apply LTV filter
y = [];
zf1 = [];
for loop_i = 1:frame_count
    sample = frames(:, loop_i);
    peak_freq = peak_freqs(loop_i);    
        
    [b,a] = peak_filter(peak_freq, peak_freq / Q, fs);
    [y_peak, zf1] = filter(b,a,sample,zf1);

    y_frame = y_peak * gain;
    y = [y; y_frame];
end
sound(y, fs, 16);
audiowrite('output.wav', y, fs);