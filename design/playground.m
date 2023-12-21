% [input, fs] = load_audio("ichika.mp3", 5, 56);
[input, fs] = load_audio("jazz.mp3", 5, 0);
audio_block_size = 32;
% [frames, frame_count] = to_frames(input, audio_block_size);
[z,p,k] = cheby2(4, 40, 10/(fs/2));
[sos, g] = zp2sos(z,p,k);
coeffs = adi_sos(sos);

abs_frame = abs(input);
env = sosfilt(sos, abs_frame);
env = env * g;
% zi = [];
% env = [];
% for i=1:frame_count
%     abs_frame = abs(frames(:, i));
%     frame_env = sosfilt(sos, abs_frame);
%     env = [env; max(frame_env)];
% end

plot(env)


% func_env = fullwave_env(input, fs);
% [func_env_frames] = to_frames(func_env, audio_block_size);
% func_env_max = max(func_env_frames, [], 1);
% func_env_final = [];
% for i = 1:length(func_env_max)
%     func_env_final = [func_env_final; ones(audio_block_size,1)*func_env_max(i)];
% end

% plot([func_env, env*200]);
% legend