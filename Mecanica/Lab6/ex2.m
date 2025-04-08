clc; clear all;

t = linspace(-2*pi, 2*pi);

f = sin(t);
g = sin(t)./t;
figure;
plot(t,f);
xlabel("Axa x");
ylabel("Axa y");
title("Cerc trigonometric");

hold on;
plot(t,g);

legend('sin(t)', 'sin(t)/t');