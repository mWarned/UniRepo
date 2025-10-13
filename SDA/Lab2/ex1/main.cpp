#include <iostream>
#include <chrono>

int main() {
  int vect[15];

  for (int i = 0; i < 15;i++) 
    vect[i]= rand() % 100 + 1;

  // Vectorul nesortat
  std::cout << "vect = [";
  for (int i = 0; i < 14;i++) 
    std::cout << vect[i] << ", ";
  std::cout << vect[14] << "]" << std::endl;

  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::system_clock::now();

  //int cnt = 0;
  bool swapped = 1;
  int j = 0;
  while (swapped) {
    int tmp = 0;
    swapped = 0;
    j = j+1;
    for (int i = 0; i < 15 - j ; i++) {
      if (vect[i] > vect[i+1]) {
        tmp = vect[i];
        vect[i] = vect[i+1];
        vect[i+1] = tmp;
        swapped = 1;
        //cnt += 1;
      } 
    }
  }

  // Vectorul sortat - Bubble sort
  std::cout << "vect = [";
  for (int i = 0; i < 14;i++) 
    std::cout << vect[i] << ", ";
  std::cout << vect[14] << "]" << std::endl;

  //std::cout << "Numarul de operatii - " << cnt << std::endl;

  end = std::chrono::system_clock::now();
  std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms" << std::endl;
  std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "us" << std::endl;

  return 0;
}
