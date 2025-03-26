#include <iostream>

template <typename T>
void bubbleSort(T* arr, int n) {
  for (int i = 0; i < n - 1; ++i) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) { 
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) break;
  }
}

int main(){
  int intArr[] = {5, 2, 9, 1, 5};
  bubbleSort(intArr, 5);

  std::cout << "[";
  for (int i = 0; i < 4; i++) {
    std::cout << intArr[i] << ", ";
  }
  std::cout << intArr[4] << "]" << std::endl;
  
  return 0;
}
