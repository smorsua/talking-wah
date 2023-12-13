[input, fs] = load_audio("ichika.mp3", 5, 0);
audio_block_size = 1000;
frames = to_frames(input, audio_block_size);
[~, frame_count] = size(frames);

[env, ~] = envelope(input, 600, 'peak');
plot(env)
peak_freqs = normalize(env, 'range', [100 600]);

ta = 0.05; % Attack time 
tr = 0.2; % Release time
a_coeff = exp(-log(9)/(fs*ta)); % Attack coefficient
r_coeff = exp(-log(9)/(fs*tr)); % Release coefficient

peak_freqs_smoothed = zeros(length(peak_freqs), 1);
prev_smoothed = 0;
for i = 1:length(peak_freqs)
    curr_freq = peak_freqs(i);
    if curr_freq <= prev_smoothed
       peak_freqs_smoothed(i) = a_coeff * prev_smoothed + (1 - a_coeff) * curr_freq;
    else
       peak_freqs_smoothed(i) = r_coeff * prev_smoothed + (1 - r_coeff) * curr_freq;
    end
    prev_smoothed = peak_freqs_smoothed(i);
end
plot([peak_freqs, peak_freqs_smoothed]);
legend


n = floor(length(peak_freqs_smoothed) / frame_count);
peak_freqs_smoothed = downsample(peak_freqs_smoothed, n);

Q = 7;
mix = 0.8;
gain = 5;

y = [];
zf1 = [];
zf2 = [];
% Actual simulation loop
for loop_i = 1:frame_count
    sample = frames(:, loop_i);
    peak_freq = peak_freqs_smoothed(loop_i);    
        
    [b,a] = peak_filter(peak_freq, peak_freq / Q, fs);
    [y_peak, zf1] = filter(b,a,sample,zf1);
    
    % y_frame = y_peak * gain * mix + (1-mix) * sample * 0.5;
    y_frame = y_peak * gain;
    y = [y; y_frame];
end
sound(y, fs, 16);
audiowrite('output.wav', y, fs);