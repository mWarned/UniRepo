include "Multime.h"

template <typename T>
T Aduna(T a, T b){
  return a + b;
}

int main()
{
  Multime<int> m1(3), m2(5);
  m1.citire();
  m2.citire();

  Multime m3 = Aduna(m1,m2);
  m3.afisare();

  return 0;
}
