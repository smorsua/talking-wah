function [peak_freqs] = wah_freqs(wah_freq, f1, f2, samples_per_frame, frame_count, fs)
%total_frames = floor(total_samples / samples_per_frame);

pulse = 2*pi*wah_freq;
t_inc = samples_per_frame / fs;
t_points = (0:frame_count-1)*t_inc;

wah_amount = 10.^cos(pulse*t_points);
peak_freqs = normalize(wah_amount, 'range', [f1 f2]);
end

