function [peak_freqs] = wah_freqs(wah_freq, f1, f2, samples_per_frame, frame_count, fs)
%total_frames = floor(total_samples / samples_per_frame);

pulse = 2*pi*wah_freq;
t_inc = samples_per_frame / fs;
t_points = (0:frame_count-1)*t_inc;

wah_amount = 10.^cos(pulse*t_points);
wah_amount = map(wah_amount, [0.1, 10], [0 ,1]);

peak_freqs = map(wah_amount, [0, 1], [200, 1000]);   % Peak frequencies
end

function [y] = map(x, r1, r2)
relative_offset = (x - r1(1)) / (r1(2) - r1(1));
y = relative_offset * (r2(2) - r2(1)) + r2(1);
end