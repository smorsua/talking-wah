[input, fs] = load_audio("ichika.mp3", 5, 56);
envelope(input, 1000, 'peak');