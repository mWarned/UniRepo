clc; clear all;

t = 0 : 0.1 : 2 * pi;

x = sin(t);
y = cos(t);
figure;
plot(x,y);
xlabel("Axa x");
ylabel("Axa y");
title("Cerc trigonometric");