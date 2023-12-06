function [audio, fs] = load_audio(name, duration)
%LOAD_AUDIO Summary of this function goes here
%   Detailed explanation goes here
[audio, fs] = audioread(name);
audio = sum(audio, 2) / 2; % Stero to mono
% Fragmento de input_duration segundos
audio = audio(1:min(floor(duration*fs), end));
end

