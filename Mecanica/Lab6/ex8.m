clc; clear all;

x = linspace(-5,5);
fx = x.^2 - 3*x + 2;
[minValue, minIndex] = min(fx);
minX = x(minIndex);

figure;
hold on;

plot(x,fx)
plot(minX, minValue, 'ro', "MarkerSize", 10, "MarkerFaceColor", 'r')
text(minX, minValue, sprintf("Minimum = %.2f", minValue), "HorizontalAlignment", "left", "VerticalAlignment", "bottom")

yline(minValue, 'g--', "LineWidth", 1, "Alpha", 0.5)

xlabel('x')
ylabel('y')
title("Graf functie")
legend("y(x)", "Minimumul", "Asimptota")

hold off;