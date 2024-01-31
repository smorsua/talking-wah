function [b,a] = biquad_lowpass(f0, Q, fs)
%BIQUAD_LOWPASS Summary of this function goes here
%   Detailed explanation goes here
wn = 2*pi*f0/fs;
alpha = sin(wn)/(2*Q);
b0 = (1-cos(wn))/2;
b1 = 1 - cos(wn);
b2 = b0;
a0 = 1 + alpha;
a1 = -2*cos(wn);
a2 = 1 - alpha;



b = [b0 b1 b2];
a = [a0 a1 a2];
end

