clc; clear;

EPS = 1.e-7;
max_iter = 30;

n = input('Introduceti ordinul sistemului - ');
while n < 2
    fprintf('Ordinul nu poate fi mai mic decat 2!\n');
    n = input('Introduceti ordinul sistemului - ');
end

fprintf('Matricea a:\n');
a = zeros(n);
retake = false;
while retake == true
    for i = 1:n
        fprintf( 'linia %g:' , i );
        a(i, :) = input(' ');
    end
    for i = 1:n
        if abs(a(i,i)) < EPS
            fprintf('Matricea are elemente prea mici pe diagonala!\n');
            retake = true;
        end
    end
end

fprintf('Matricea b: \n');
b = zeros(n, 1);
for i = 1:n
    b(i, 1) = input(' ');
end

fprintf('Matricea xn: \n');
xn = zeros(n, 1);
for i = 1:n
    xn(i, 1) = input(' ');
end

retake = 10;
while retake ~= 0
    N = diag(diag(a));
    P = N - a;
    G = inv(N) * P;
    vp = eig(G);
    rs = max(abs(vp));
    
    if(rs < 1)
        fprintf('Metoda converge!\n');
    else
        fprintf('Metoda nu converge!\n');
    end
    
    cnt = 0;
    while cnt <= max_iter
        xv = xn;
        for i=1:n
            suma = 0;
            for j = 1:n
                if j ~= i
                    suma = suma + (a(i,j)/a(i,i)*xv(j));
                end
            end
            xn(i) = (b(i)/a(i,i)) - suma;
        end
        cnt = cnt + 1;
    end
    x = a\b;
    
    disp(xn);
    disp(x);

    fprintf('=================Reluare================\n');
    fprintf('1. Cu alta estimatie initiala a solutiei\n');
    fprintf('2. Cu alt termen liber\n');
    fprintf('3. Cu alt sistem de acelasi ordin\n');
    fprintf('4. Cu alt sistem de alt ordin\n');
    fprintf('0. Terminarea programului\n');
    fprintf('----------------------------------------\n');
    retake = input('Realuarea - ');

    if retake == 1
        printf('Noile valoari initiale:');
        for i = 1:n
            xn(i, 1) = input(' ');
        end
    end
    if retake == 2
        fprintf('Matricea b: \n');
        b = zeros(n, 1);
        for i = 1:n
            b(i, 1) = input(' ');
        end
    end
    if retake == 3
        fprintf('Matricea a:\n');
        a = zeros(n);
        retake = true;
        while retake == true
            for i = 1:n
                fprintf( 'linia %g:' , i );
                a(i, :) = input(' ');
            end
            for i = 1:n
                if abs(a(i,i)) < EPS
                    fprintf('Matricea are elemente prea mici pe diagonala!\n');
                    retake = true;
                end
            end
        end
    end
    if retake == 4
        n = input('Introduceti ordinul sistemului');
        while n < 2
            fprintf('Ordinul nu poate fi mai mic decat 2!\n');
            n = input('Introduceti ordinul sistemului');
        end
        
        fprintf('Matricea a:\n');
        a = zeros(n);
        retake = false;
        while retake == true
            for i = 1:n
                fprintf( 'linia %g:' , i );
                a(i, :) = input(' ');
            end
            for i = 1:n
                if abs(a(i,i)) < EPS
                    fprintf('Matricea are elemente prea mici pe diagonala!\n');
                    retake = true;
                end
            end
        end
    end
end
