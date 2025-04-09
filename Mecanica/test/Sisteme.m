clc; clear all;

%%
val = [4 1 0 -2; 0 -3 5 1; 1 2 -3 0; -2 0 1 3];
rez = [10 -2 4 6];
rez = rez';

vars = val \ rez;

%%

A = [3 -1 5; 9 6 -2];
B = [-10; 10];
C = A\B