clc; clear;

eps = 1;
k = 0;

while (1 - eps) ~= 1
    eps = eps / 2;
    k = k + 1;
end

eps = eps / 2
k = k + 1