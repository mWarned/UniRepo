clc; clear;

A = rand(5);
A = 10 ./ A;
fprintf('A = \n'); disp(A);

B = zeros(6,3);
B([1,3],:) = 3.5;
B = B .^ 10;
fprintf('B = \n'); disp(B);

C = ones(5);
C1 = ones(5);
C1 = C1 .* sqrt(5)*(exp(4) / -4);
C = C .* C1(end, :);
fprintf('C = \n'); disp(C);

D = ones(2,8);
D = D(1,:) .* D(:,end);
fprintf('D = \n'); disp(D);
