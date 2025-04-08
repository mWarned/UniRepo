clc; clear;

n = 0;
n = input('numarul de valori - ');

for i = 1:n
    fprintf('a[%g] = ', i);
    a(i) = input(' ');
end

fprintf('\n')
disp(a)
m = sum(a)/length(a)