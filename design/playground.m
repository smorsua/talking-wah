fs = 48000;
[b,a] = biquad_lowpass(500, 40, fs);
fvtool(b,a)