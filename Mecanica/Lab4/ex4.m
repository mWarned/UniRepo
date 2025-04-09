clc; clear;

a = [1 2 3 4; 5 6 7 8];

x = rem(a,2)~=0;
sum = sum(a(x>0))

y = rem(a,2)==0;
prod = prod(a(y>0))