[input, fs] = load_audio("ichika.mp3", 9);
audio_block_size = 1000;
frames = to_frames(input, audio_block_size);
[~, frame_count] = size(frames);
peak_freqs = wah_freqs(2, 200, 400, audio_block_size , frame_count, fs);

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

    peak_freq2 = peak_freq + 600;
    [b,a] = peak_filter(peak_freq2, peak_freq2 / Q, fs);
    [y_peak2, zf2] = filter(b,a,sample,zf2);
    
    y_frame = y_peak + y_peak2;
    y = [y; y_frame];
end
sound(y, fs, 16);
audiowrite('output.wav', y, fs);