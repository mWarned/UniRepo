clc; clear;

rel = 5;
EPS = 1.e-10;
n = 0;
firstIt = true;
while rel ~= 0
    if rel == 1
        EPS = input('Parametrul EPS - ');
    end
    if rel == 2
        n = input('Ordinul matricei - ');
    end
    while n < 2
        n = input('Ordinul matricei - ');
    end
    
    while n < 2
        n = input(['n trebuie sa fie mai mare sau egal cu 2!\n' ...
            'Introduceti marimea matricei - ']);
    end
    
    if rel == 3 | firstIt == true
        fprintf('Matricea valorilor:\n');
        a = zeros(n);
        for i = 1:n
         fprintf( 'linia %g:' , i );
         a(i, :) = input(' ');
        end
    end
    aa = a;
    if rel == 4 | firstIt == true
        fprintf(['Matricea coeficientilr: \n']);
        b = zeros(n, 1);
        for i = 1:n
         b(i, 1) = input(' ');
        end
    end
    bb = b;
    
    for k=1:n-1
        if abs(a(k, k)) > EPS
            I = eye(n);
            m(k+1:n) = a(k+1:n, k)/a(k,k);
            M = I - m' * I(:, k)';
            a = M * a;
            b = M * b;
        end
    end
    
    b(n) = b(n) / a(n,n);
    for i = n-1:-1:1
        b(i) = (b(i) - sum(a(i, i+1:end) .* b(i+1:end))) / a(i,i);
    end
    disp(b);
    
    x_bs = aa \ bb
    x_inv = inv(aa) * bb
    
    rezid1 = bb - (aa .* x);
    norma1 = norm(rezid1)
    rezid2 = bb - (aa .* x_bs);
    norma2 = norm(rezid2)
    rezid3 = bb - (aa .* x_inv);
    norma3 = norm(rezid3)

    firstIt = false;

    rel = input(['1. Reluarea programului cu alt parametru EPS\n' ...
        '2. Reluarea programului cu un sistem de alt ordin\n' ...
        '3. Reluarea programului cu un alt sistem de acelasi ordin\n' ...
        '4. Reluarea programului cu un alt termen liber\n\n' ...
        'Nr ales - ']);
end
