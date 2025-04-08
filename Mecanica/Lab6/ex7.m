clc; clear all;

A = 10 * rand(7,11)
A1 = A(2:5, 3:4);

max(max(A1))

elemente = A(A<3.5);
suma = sum(elemente)