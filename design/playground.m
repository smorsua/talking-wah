n=1000;
freqs = linspace(200,2000,n);
R = flip(linspace(0.5,0.99,n));
max_db = [];
Fs = 48000;
i = 1;
for f = freqs
    [b,a] = peak_filter(f, R(i), Fs);
    [h,w] = freqz(b,a,n);
    semilogx(linspace(0,Fs/2,n), abs(h))
    hold on
    max_db = [max_db 20*log(max(abs(h)))];
    i = i+1;
end