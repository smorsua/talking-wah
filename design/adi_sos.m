function [coeffs] = adi_sos(sos)
%ADI_SOS Summary of this function goes here
%   Detailed explanation goes here
sos = fliplr(sos);
sos = sos(:, [1 2 4 5]);
sos = sos';
coeffs = sos(:);
end

