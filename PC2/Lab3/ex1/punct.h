class Punct
{
private:
    int x, y;
public:
    void SetX(int);
    void SetY(int);
    int GetX();
    int getY();
    double distantaO();
    double distantaLa(Punct);
    void compareWith(Punct);
    Punct(int x = 0, int y = 0);
};
