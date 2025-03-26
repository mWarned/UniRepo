#include <iostream>
#include <string.h>

class Masina {
public:
  Masina(char c[], int a){
    int len = strlen(c);
    strcpy(culoare, c);
    an = a;
  }

  Masina(const Masina &m){
    int len = strlen(m.culoare);
    strcpy(culoare, m.culoare);
    an = m.an;
  }

  void afiseaza(){
    std::cout << culoare << " " << an << std::endl;
  }

  bool operator>(const Masina &m){
    return (an > m.an) ? true : false;
  }

private:
  char culoare[20];
  int an;
};

