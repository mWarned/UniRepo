#include <iostream>

int main(){
  int matrix[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      matrix[i][j] = rand() % 100 + 1;
    }
  }

  std::cout << "Matricea:" << std::endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout << matrix[i][j] << " ";
 }
    std::cout << std::endl;
  }

  int xi = 0, xj = 0;
  if (matrix[0][0] != 91) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if (matrix[i][j] == 91) {
          xi = i; xj = j;
          break;
        }
      }
    }
    if (xi == 0 && xj == 0) {
      std::cout << "Valoarea x nu e in matrice" << std::endl;
    } else {
      std::cout << "Valoarea lui x se afla la coordonatele (" << xi << ", " << xj << ")" << std::endl;
    }
  } else {
    std::cout << "Valoarea lui x se afla la coordonatele (0, 0)" << std::endl;
  }
  
  return 0;
}
