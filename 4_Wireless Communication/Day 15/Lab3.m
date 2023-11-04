clear all; close all; clc;

fc = 1;
M1 = 4; M2 = 16;
stream_size = 10000;
SNR = 1 : 1 : 20;
k1 = log2(M1); k2 = log2(M2);

ber1 = [];
ber2 = [];

data = randi([0,1], stream_size, 1);

stream1 = reshape(data, stream_size / k1, k1);
stream1 = bi2de(stream1);

stream2 = reshape(data, stream_size / k2, k2);
stream2 = bi2de(stream2);


stream1 = qammod(stream1, 4);
stream2 = qammod(stream2, 16);

for snr = SNR

signal1 = awgn(stream1 ,snr);
signal2 = awgn(stream2 ,snr);



recieved1 = qamdemod(signal1, 4);
recieved2 = qamdemod(signal2, 16);


recieved1 = de2bi(recieved1);
recieved2 = de2bi(recieved2);


recieved1 = recieved1(:);
recieved2 = recieved2(:);


[errors, b1] = biterr(data, recieved1);
[errors, b2] = biterr(data, recieved2);

ber1 = [ber1, b1];
ber2 = [ber2, b2];

end

figure;
semilogy(SNR, ber1, 'r');
hold on;
semilogy(SNR, ber2, 'b');