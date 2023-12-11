function [y] = map(x, r1, r2)
relative_offset = (x - r1(1)) / (r1(2) - r1(1));
y = relative_offset .* (r2(2) - r2(1)) + r2(1);
end