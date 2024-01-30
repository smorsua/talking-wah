function [sos_out, scale] = adi_sos(sos_in, g)
%ADI_SOS Summary of this function goes here
sos_out = [];
scale = 1;
for i = 1:size(sos_in,1)
    a2 = sos_in(i,6);
    a1 = sos_in(i,5);
    a0 = sos_in(i,4);
    b2 = sos_in(i,3);
    b1 = sos_in(i,2);
    b0 = sos_in(i,1);
    sos_out((i-1)*4+0+1) = -(a2/a0); %a2
    sos_out((i-1)*4+1+1) = -(a1/a0); %a1
    sos_out((i-1)*4+2+1) = b2/b0;
    sos_out((i-1)*4+3+1) = b1/b0;
    scale = scale * (b0/a0);
end
scale = scale * g;
end

