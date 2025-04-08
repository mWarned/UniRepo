clc; clear all;

v = [];
for i=1:12
    v(i) = input('Un numar intre 1 si 5:');
    while v(i)<1 || v(i)>5 
        display('Valoare trebuie sa fie intre 1 si 5');
        v(i) = input('Un numar intre 1 si 5:');
    end
end

v1 = 0; v2 = 0; v3 = 0; v4 = 0; v5 = 0;
for i=1:12
    switch v(i)
        case 1
            v1 = v1 + 1;
        case 2
            v2 = v2 + 1;
        case 3
            v3 = v3 + 1;
        case 4
            v4 = v4 + 1;
        case 5
            v5 = v5 + 1;
    end
end

fprintf("Numarul de repetari\n'1' = %g\n'2' = %g\n'3' = %g\n'4' = %g\n'5' = %g\n", v1,v2,v3,v4,v5);