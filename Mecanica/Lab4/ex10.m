clc; clear;

x = input('Introduceti valoarea - ');

if x >= 0 && x <= 100
    fprintf('In interval\n');
    if x > 25 && x <= 50
        fprintf('Prima jumatate\n');
    elseif x > 50 && x <= 75
        fprintf('A doua jumatate\n');
    end
else
    fprintf('In afara intervalului\n');
end