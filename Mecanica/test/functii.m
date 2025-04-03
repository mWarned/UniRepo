clc; clear all;

M = generateMat(50)

imagesc(M)

function M = generateMat(n)
    M = zeros(n);
    M(1, n/2) = 1;
    for i = 2:n-1
        for j = 2:n-1
            M(i,j) = xor(M(i-1, j-1), M(i-1, j+1));
        end
    end
end