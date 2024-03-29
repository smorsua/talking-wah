[input, fs] = load_audio("jazz.mp3", 5, 4);

audio_block_size = 1000;
[frames, frame_count] = to_frames(input, audio_block_size);

env = fullwave_env(input, fs);
env_log = 10.^env;
peak_freqs = normalize(env_log, 'range', [200, 1000]);
n = floor(length(peak_freqs) / frame_count);
peak_freqs = downsample(peak_freqs, n);

Q = 6;
mix = 0.9;
gain = 1;

% Apply LTV filter
y = [];
zf1 = [];
for loop_i = 1:frame_count
    sample = frames(:, loop_i);
    peak_freq = peak_freqs(loop_i);    
        
    [b,a] = peak_filter(peak_freq, peak_freq / Q, fs);
    %[b,a] = biquad_lowpass(peak_freq, 10, fs);
    [y_peak, zf1] = filter(b,a,sample,zf1);

    y_frame = y_peak * mix + sample * (1-mix);
    y = [y; y_frame * gain];
end
sound(y, fs, 16);
audiowrite('output.wav', y, fs);