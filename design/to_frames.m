function [frames] = to_frames(input, frame_length)
%TO_FRAMES Summary of this function goes here
%   Detailed explanation goes here
padded_input = [input; zeros(rem(length(input), frame_length), 1)];
frames = reshape(padded_input, frame_length, []);
end

