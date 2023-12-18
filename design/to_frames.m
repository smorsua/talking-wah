function [frames, frame_count] = to_frames(input, frame_length)
%TO_FRAMES Summary of this function goes here
%   Detailed explanation goes here
padded_input = [];
if rem(length(input), frame_length) ~= 0
    padded_input = [input; zeros(frame_length - rem(length(input), frame_length), 1)];
else
    padded_input = input;
end

frames = reshape(padded_input, frame_length, []);
[~, frame_count] = size(frames);
end

