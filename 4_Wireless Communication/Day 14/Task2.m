clc;
clear all;

Ts = 0.01;
fc = 1;
stream_size = 100;

bit_stream = randi([0,1], 1, stream_size);
t = 0 : Ts : length(bit_stream) - Ts;

carrier = cos(2 * pi * fc * t);

rep = repmat(bit_stream, 1 / Ts , 1);
sig = reshape(rep, 1, []);
sig = real(pskmod(sig, 2));

modulation = carrier.*(sig);
dem = pskdemod(sig, 2);
figure;
subplot(311); stem(bit_stream);
subplot(312);plot(modulation);
subplot(313);plot(dem);