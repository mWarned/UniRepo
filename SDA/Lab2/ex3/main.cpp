#include <iostream>

int main(){

  int *matrix = new int[nc*nl];

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

  std::cout << "Valoarea la coordonatele (3,3) - " << matrix[3][3] << std::endl;

  int max = matrix[0][0];
  int maxi = 0, maxj = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (matrix[i][j] > max) {
        max = matrix[i][j];
        maxi = i; maxj = j;
      }  
    }
  }

  std::cout << "Valoarea maxima - " << max << " se afla la coordonatele (" << maxi << ", " << maxj << ")" << std::endl;

  return 0;
}
