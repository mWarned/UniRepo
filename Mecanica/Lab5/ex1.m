clc; close all;

A = [129 155 145 131 160 151]
B = [178 198 183 174 181 193]
luna = [1 2 3 4 5 6]
figure;
yyaxis left;
plot(luna, A, 'b-V',"LineWidth", 2);
ylim([125, 200]);
yyaxis right;
plot(luna, B, 'r:d', "LineWidth", 2);
title("Preturi A-B");
xlabel("luna");
ylabel("pretul");
axis([0 7 125 200]);