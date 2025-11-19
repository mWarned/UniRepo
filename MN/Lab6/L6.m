clc; clear;

rel = 1;
EPS = 1.e-5;
n = 0;
while rel ~= 0
    % EPS = input('Parametrul EPS - ');
    % m = input('Nr de linii a matricei - ');
    % n = input('Nr de coloane a matricei - ');
    n = 4;

    % fprintf('Matricea valorilor:\n');
    % a = zeros(n)
    % for i = 1:n
    %     fprintf( 'linia %g:' , i );
    %     a(i, :) = input(' ');
    % end

    a = [5 4 1 1; 4 5 1 1; 1 1 4 2; 1 1 2 4];
    aa = a;

    % FAZA I - Heinsenberg

    q = eye(n);
    for k=1:n-2
        sigma = a(k+1,k)/abs(a(k+1,k)) * sqrt(sum(a(k+1:n, k).^2));
        u = zeros(n, 1);
        u(k+1) = a(k+1,k) + sigma;
        beta = sigma * u(k+1);

        if abs(beta) > EPS
            u(k+2:n) = a(k+2:n,k);
            U = eye(n) - (u * u' / beta);
            a = U * a * U;
        end

        q = U * q;
    end

    disp(a);

    % FAZA II

    iter = 0;
    flag = 1;
    H = a;

    while(flag)
        iter = iter + 1;
        flag = 0;

        miu = H(n,n);
        H = H - miu * eye(n);

        pt = eye(n);
        for k = 1:n-1
            p = eye(n);
            r = sqrt(H(k,k)^2 + H(k+1,k)^2);
            ck = H(k,k) / r; dk = H(k+1,k) / r;

            p(k,k) = ck; p(k,k+1) = dk; 
            p(k+1,k) = - dk; p(k+1,k+1) = ck;

            H = p * H;
            pt = pt * p';
            q = p * q;
        end
        H = H * pt;
        H = H + miu * eye(n);

        for k = 1:n-1
            if abs(H(k+1,k)) < EPS * (abs(H(k,k)) + abs(H(k+1,k+1)))
                H(k+1,k) = 0;
            end
        end

        disp(H);
        
        S = H;

        % Test 1
        for i = 1:n-2
            if S(i+1,i) ~= 0 && S(i+2, i) ~= 0
                flag = 1;
                break;
            end
        end

        % Test 2
        if flag == 0
            
        end
    end

    % fprintf(['Matricea coeficientilr: \n']);
    % b = zeros(n, 1);
    % for i = 1:n
    %     b(i, 1) = input(' ');
    % end
    b = [11;12;13;14;15;];
    bb = b;

    % rel = input(['1. Restart\n' ...
    %     '0. Exit\n' ...
    %     '-------------\n' ...
    %     'Nr ales - ']);
    rel = 0;
end
