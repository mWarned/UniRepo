clc; clear all;

A = [1 2 3; 4 5 6; 7 8 9]

B = diag(A) .^ 2
C = triu(A, 1) .^ 3
D = sqrt(tril(A, -1))