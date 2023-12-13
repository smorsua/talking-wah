[input, fs] = load_audio("ichika.mp3", 5, 56);
% [input, fs] = load_audio("tuner.mp3", 5, 14.5);
audio_block_size = 1000;
frames = to_frames(input, audio_block_size);
[~, frame_count] = size(frames);

[env, ~] = envelope(input, 1000, 'peak');
env = normalize(env, 'range', [-1 1]);
env_smoothed = attack_release_filter(env, 0.1, 0.1, fs); % 0.6 to -0.2

upper_limit = ones(length(env_smoothed), 1)*0.6;
lower_limit = ones(length(env_smoothed), 1)*-0.2;
env_smoothed = min(upper_limit, env_smoothed);
env_smoothed = max(lower_limit, env_smoothed);
plot(env_smoothed)

peak_freqs = normalize(env_smoothed, 'range', [100, 900]);
plot(peak_freqs);
n = floor(length(peak_freqs) / frame_count);
peak_freqs = downsample(peak_freqs, n);

Q = 3.5;
mix = 0.8;
gain = 1;

% Apply LTV filter
y = [];
zf1 = [];
zf2 = [];
for loop_i = 1:frame_count
    sample = frames(:, loop_i);
    peak_freq = peak_freqs(loop_i);    
        
    [b,a] = peak_filter(peak_freq, peak_freq / Q, fs);
    [y_peak, zf1] = filter(b,a,sample,zf1);
    
    % y_frame = y_peak * gain * mix + (1-mix) * sample * 0.5;
    y_frame = y_peak * gain;
    y = [y; y_frame];
end
sound(y, fs, 16);
audiowrite('output.wav', y, fs);