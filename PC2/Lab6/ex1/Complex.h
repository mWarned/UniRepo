class Complex
{
private:
    int re, im;
public:
    int GetRe();
    int GetIm();
    void SetRe(int);
    void SetIm(int);
    void afisare();
    Complex operator+(Complex);
    Complex operator++();
    Complex operator++(int);
    float operator~();
    Complex operator-(Complex);
    Complex operator*(Complex);
    void operator!();
    Complex(int a = 0, int b = 0);
};
