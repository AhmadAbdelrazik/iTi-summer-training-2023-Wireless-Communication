clc;
clear all;
close all;

Ts = 0.01;
fc = 1;
data_size = 10;

t = linspace(0, data_size - Ts, data_size/ Ts);

bit_stream = randi([0,1], data_size, 1);
bit_stream = reshape(repmat(bit_stream, 1/ Ts, 1), 1, []);

carrier_4_QAM =   qammod(bit_stream, 4);

scatterplot(carrier_4_QAM);
