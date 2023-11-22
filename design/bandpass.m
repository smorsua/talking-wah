Fs = 48000; % Sampling Frequency
N = 8; % Order
Fpass1 = 100; % First Passband Frequency
Fpass2 = 1000; % Second Passband Frequency
Apass = 2; % Passband Ripple (dB)
Astop = 20; % Stopband Attenuation (dB)
% Construct an FDESIGN object and call its ELLIP method.
bandpassSpecs = fdesign.bandpass;
designmethods(bandpassSpecs,'Systemobject',true)
designoptions(bandpassSpecs, 'butter')
bpFilter = design(bandpassSpecs, 'butter', 'matchexactly', 'passband', 'SystemObject', true);
fvtool(bpFilter)
%h = fdesign.bandpass('N,Fp1,Fp2,Ast1,Ap,Ast2', N, Fpass1, Fpass2, ...
% Astop, Apass, Astop, Fs);
%Hd = design(h, 'ellip');
%fvt = fvtool(Hd,'Fs',48000);