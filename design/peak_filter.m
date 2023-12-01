function [b,a] = peak_filter(f0, R, fs)
%PEAK_FILTER Summary of this function goes here
%   Detailed explanation goes here
% 
w0 = 2*pi*f0/fs;
% 
% bw = 2*pi*(f0/Q)/fs;
%bw = 2*pi*200/fs;
% 
% b = 1/(1+tan(bw/2));
% a1 = -2*b*cos(w0);
% a2 = 2*b-1;
% 
% b = [0.5 -0.5*a2 0.5*(a2-1)];
% a = [1  a1  a2];
% Gb = 0.5;
% beta = Gb/sqrt(1-Gb^2)*tan(bw/2);
% b_param = 1/(1+beta);
% b = [1 0 -1] * (1-b_param);
% a = [1 -2*b_param*cos(w0) (2*b_param-1)];

cos_theta = ((1+R^2)/(2*R))*cos(w0);

b = [1 0 -1] * ((1-R^2)/2);
a = [1 -2*R*cos_theta (R^2)];
end

