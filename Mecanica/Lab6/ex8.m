clc; clear all;

x = linspace(-5,5);
fx = x.^2 - 3*x + 2;
[minValue, minIndex] = min(fx);
minX = x(minIndex);
figure;
plot(x,fx)
hold on;
plot(minX, minValue, 'ro', "MarkerSize", 10, 'LineWidth', 2)