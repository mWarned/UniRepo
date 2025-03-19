class Matrix
{
private:
    int NrL, NrC;
    int elemente[10][10];
public:
    int getNrL();
    int getNrC();
    void afisare();
    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    Matrix operator*(Matrix);
    bool operator==(Matrix);
    Matrix operator+(int);
    Matrix operator~();
    Matrix operator++();
    Matrix operator++(int);
    int operator[](int);
    Matrix();
    Matrix(int, int);
    ~Matrix();
};
