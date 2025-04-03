clc; clear all;

[x,y] = meshgrid(1:0.1:10,1:0.1:10);
f = x.^2 - 4*y +tan(y);
figure;
%surf(x, y, f);
plot3(x,y,f);
title("Functiile f/g");
xlabel("Axa x");
ylabel("Axa y");