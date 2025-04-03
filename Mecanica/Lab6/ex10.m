clc; clear all;

A.x = 0; A.y = 0;
B.x = 0; B.y = 0;
C.x = 0; C.y = 0;

if(esteTriunghi(A,B,C))
   area(A,B,C)
else
    display('Nu poate fi triunghi.');
end

function dist = distanta(A,B)
    dist = sqrt((A.x - B.x)^2 + (A.y - B.y)^2);
end

function a = area(A,B,C)
    s = (distanta(A,B) + distanta(B,C) + distanta(A,C)) / 2;
    a = sqrt(s * (s - distanta(A,B)) * (s - distanta(B,C)) * (s - distanta(A,C)));
end

function triunghi = esteTriunghi(A,B,C)
    d1 = distanta(A,B);
    d2 = distanta(B,C);
    d3 = distanta(A,C);
    
    aria = area(A,B,C);
    checkLength = (d1 + d2 > d3) && (d2 + d3 > d1) && (d1 + d3 > d2);
    triunghi = (aria > 0) && checkLength;
end