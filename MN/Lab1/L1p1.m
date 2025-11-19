clc; clear;

format short;
rel = 1;

while(rel == 1)

    x = input('x = ');
    sum = 1;
    trm = 1;
    n = 0;
    olds = sum;
    n = n + 1;
    trm = trm * x / n;
    sum = sum + trm;
    while(sum ~= olds)
        olds = sum;
        n = n + 1;
        trm = trm * x / n;
        sum = sum + trm;
    end
    f = sum;
    fprintf('Nr. iteratii = %g, f = %g\n', n, f);
    fx = exp(x);
    fprintf('fx = %g\n', fx);
    rel = input('1 = reluare; 0 = nu;\n');

end
