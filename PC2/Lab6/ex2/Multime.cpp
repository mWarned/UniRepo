#include "Multime.h"
#include <iostream>

template <typename T>
Multime<T>::Multime(int n) : nrElemente(n) {
    vector = new T[n];
    for (int i = 0; i < n; i++) {
        std::cout << "el[" << i << "] = ";
        std::cin >> vector[i];
    }
}

template <typename T>
Multime<T>::~Multime() {
    delete[] vector;
}

template <typename T>
Multime<T>::Multime(const Multime& m) : nrElemente(m.nrElemente) {
    vector = new T[nrElemente];
    for (int i = 0; i < nrElemente; i++) {
        vector[i] = m.vector[i];
    }
}

template <typename T>
Multime<T>::Multime(Multime&& m) : vector(m.vector), nrElemente(m.nrElemente) {
  m.vector = nullptr;
  m.nrElemente = 0;
}

template <typename T>
void Multime<T>::afisare() {
  std::cout << "Elementele vectorului - {";
  for (int i = 0; i < nrElemente - 1; i++) {
    std::cout << vector[i] << ", ";
  }
  std::cout << vector[nrElemente - 1];
  std::cout << "}" << std::endl;
}

template <>

template class Multime<int>;
template class Multime<float>;
template class Multime<double>;
