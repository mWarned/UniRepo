clc; clear;

rel = 1;
EPS = 1.e-16;
m = 0; n = 0;
while rel ~= 0
    % EPS = input('Parametrul EPS - ');
    % m = input('Nr de linii a matricei - ');
    % n = input('Nr de coloane a matricei - ');
    m = 5; n = 2;

    while m <= n
        fprintf(['Numarul de linii trebuie sa fie mai mare decat numarul' ...
            ' de coloane!\n']);
        m = input('Nr de linii a matricei - ');
        n = input('Nr de coloane a matricei - ');
    end

    % fprintf('Matricea valorilor:\n');
    % a = zeros(m, n)
    % for i = 1:m
    %     fprintf( 'linia %g:' , i );
    %     a(i, :) = input(' ');
    % end

    a = [1 6; 2 7; 3 8; 4 9; 5 10]
    aa = a;

    Utot = eye(m);
    U = zeros(m);
    for k=1:n
        sigma = a(k,k)/abs(a(k,k)) * sqrt(sum(a(k:m, k).^2));
        u = zeros(m, 1);
        u(k) = a(k,k) + sigma;
        beta = sigma * u(k);

        if abs(beta) > EPS
            u(k+1:m) = a(k+1:m,k);
            U = eye(m) - u * u' / beta;
            a = U * a;
        end

        Utot = U * Utot;
    end

    disp(a);

    % fprintf(['Matricea coeficientilr: \n']);
    % b = zeros(m, 1);
    % for i = 1:n
    %     b(i, 1) = input(' ');
    % end
    b = [11;12;13;14;15;]
    bb = b;

    b = Utot * b;
    d = b;
    b(n) = b(n) / a(n,n);
    i = n-1:-1:1;
    b(i) = (b(i) - a(i, i+1:n) * b(i+1:n))/a(i,i);
    x = b;
    x_bs = aa\bb

    r = d - a*x(1:n)
    r_bs = bb - aa*x_bs(1:n)
    norma = norm(r)
    norma_rbs = norm(r_bs)

    rel = input(['1. Restart\n' ...
        '0. Exit\n' ...
        '-------------\n' ...
        'Nr ales - ']);
end
