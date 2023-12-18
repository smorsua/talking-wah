function [env] = fullwave_env(input, fs)
abs_input = abs(input);
fnyq = fs/2;
[b,a] = cheby2(4, 60, 30/fnyq);
env = filter(b,a,abs_input);
end

