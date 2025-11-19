clc; clear;

x = linspace(0.998,1.012,140);

y1 = (x - 1).^ 7;
y2 = x.^7 - 7 * x .^ 6 + 21 * x .^ 5 - 35 * x .^ 4 + 35 * x .^3 - 21 * x .^ 2 + 7 * x - 1;

plot(x, y1);
hold on
plot(x, y2);