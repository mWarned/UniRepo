clc; clear;

x = input('Valoarea in celsius - ');
F = Cels2Fahr(x)

y = input('Valoarea in faranheit - ');
C = Fahr2Cels(y)

function F = Cels2Fahr(C)
    F = (9/5)*C+32;
end

function C = Fahr2Cels(F)
    C = (F-32)*(5/9);
end