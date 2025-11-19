clc; clear;

e = 2.718281828459;
rel = 1;

while(rel == 1)

    x = input('x = ');
    sum = 1;
    trm = 1;
    n = 0;
    fract = abs(x - fix(x));
    m = fix(abs(x));
    olds = sum;
    n = n + 1;
    trm = ((-1) ^ n) * trm * fract ^ (2 * n) / (2 * n);
    sum = sum + trm;

    while(sum ~= olds)
        olds = sum;
        n = n + 1;
        trm = ((-1) ^ n) * trm * fract / (2 * n);
        sum = sum + trm;
    end

    sum2 = 0;
    trm2 = 1;
    n = 0;
    m = fix(abs(x));
    olds = sum2;
    n = n + 1;
    trm2 = ((-1) ^ n) * trm2 * m * m / (2 * n);
    sum2 = sum2 + trm2;

    while(sum ~= olds)
        olds = sum;
        n = n + 1;
        trm2 = ((-1) ^ n) * trm2 * m * m / (2 * n);
        sum = sum + trm2;
    end

    if(x >= 0)
        f = sum * (e ^ (2*m));
    else
        f = 1 / (sum * (e ^ (2*m)));
    end

    fprintf('Nr. iteratii = %g, f = %g\n', n, f);
    fx = cos(x);
    fprintf('fx = %g\n', fx);
    rel = input('1 = reluare; 0 = nu;\n');

end