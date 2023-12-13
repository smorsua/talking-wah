function [output] = attack_release_filter(input, ta, tr, fs)

a_coeff = exp(-log(9)/(fs*ta)); % Attack coefficient
r_coeff = exp(-log(9)/(fs*tr)); % Release coefficient

output = zeros(length(input), 1);
prev_output = 0;
for i = 1:length(input)
    curr_val = input(i);
    if curr_val > prev_output
       output(i) = a_coeff * prev_output + (1 - a_coeff) * curr_val;
    else
       output(i) = r_coeff * prev_output + (1 - r_coeff) * curr_val;
    end
    prev_output = output(i);
end