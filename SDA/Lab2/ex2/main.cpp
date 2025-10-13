#include <iostream>

int max(int x, int y) { return (x > y) ? x : y; }

void printMaxSubArray(int num[], int size) {
    int max_so_far = num[0];
    int curr_max = num[0];
    int start = 0;
    int end = 0;
    int temp_start = 0;

    for (int i = 1; i < size; i++) {
        if (num[i] > curr_max + num[i]) {
            curr_max = num[i];
            temp_start = i;
        } else {
            curr_max = curr_max + num[i];
        }
        if (curr_max > max_so_far) {
            max_so_far = curr_max;
            start = temp_start;
            end = i;
        }
    }

    std::cout << "Maximum subarray sum: " << max_so_far << std::endl;
    std::cout << "Subarray: [";
    for (int i = start; i <= end; i++) {
        std::cout << num[i];
        if (i < end) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main(){

  int vect[15];

  for (int i = 0; i < 15;i++) 
    vect[i]= rand() % 100 - 69;

  std::cout << "vect = [";
  for (int i = 0; i < 14;i++) 
    std::cout << vect[i] << ", ";
  std::cout << vect[14] << "]" << std::endl;

  printMaxSubArray(vect, 15);

  return 0;
}
