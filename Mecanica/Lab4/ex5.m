clc; clear;

x = input('Numarul lunii - ')

switch x
    case 1
        fprintf('Ianuarie\n')
    case 2
        fprintf('Februarie\n')
    case 3
        fprintf('Martie\n')
    case 4
        fprintf('Aprilie\n')
    case 5
        rintf('Mai\n')
    case 6
        fprintf('Iunie\n')
    case 7
        fprintf('Iulie\n')
    case 8
        fprintf('August\n')
    case 9
        fprintf('Septembrie\n')
    case 10
        fprintf('Octombrie\n')
    case 11
        fprintf('Noiembrie\n')
    case 12
        fprintf('Decembrie\n')
    otherwise
        fprintf('Eroare\n')
end