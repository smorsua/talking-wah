function [b,a] = peak_filter(f0, bw, fs)
%PEAK_FILTER Summary of this function goes here
%   Detailed explanation goes here
% 
w0 = 2*pi*f0/fs;
bw = 2*pi*bw/fs;
Gb = 0.9;
beta = Gb/sqrt(1-Gb^2)*tan(bw/2);
b_param = 1/(1+beta);
b = [1 0 -1] * (1-b_param);
a = [1 -2*b_param*cos(w0) 2*b_param-1];
end

