clc; clear;

%%

for n = 1:10
    fprintf('iteratia %g', n)
    a(n) = n^2
end

%%

x = 7;
for i = -2:0.5:2
    x = x + i
end

%%

j = 0
for m = 10:-3:0
    fprintf('m = %g', m)
    j = j+1
end

%%

w = 100
if rem(w,2)~=0
    x = 15
else x = 25
end
    
%%