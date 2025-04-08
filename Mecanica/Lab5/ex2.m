clc; clear all;

x = 0 : 0.1 : 100;
f = x.^3 + 4*x - 15;
g = sin(x) + sin(2*x) + sin(3*x);
figure;

subplot(2,1,1);
plot(x, f, 'b-',"LineWidth", 1);
title("Functia f");
xlabel("Axa x");
ylabel("Axa y");
axis([-5 105 -10 10^5]);

subplot(2,1,2);
plot(x, g, 'r-',"LineWidth", 1);
title("Functia g");
xlabel("Axa x");
ylabel("Axa y");
axis([-5 105 -2.5 2.5]);