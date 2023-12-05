% Q = 10;
% for f = 100:100:1000
%     [b,a] = peak_filter(f,f/Q,44100);
%     if f == 100
%         handle = fvtool(b,a);
%     else
%         addfilter(handle, b,a);
%     end  
% end

Q = 5;
f = 1000;
fs = 48000;
[b,a] = peak_filter(f, f/Q, fs);
