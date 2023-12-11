[input, fs] = load_audio("ichika.mp3", 9);
y = envelope(input, 1000, 'peak');
plot(10.^y)
% [b,a] = butter(2,10/(fs/2));
% y_lp = filter(b,a,y);
% plot(y_lp)
% [yupper, ylower] = envelope(input);
