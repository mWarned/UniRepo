#include <iostream>

template <typename T>
class Multime {
  public:
    Multime(int n = 0) : nrElemente(n) {
      vector = new T[n];
    }

    Multime(Multime&& m) : vector(m.vector), nrElemente(m.nrElemente) {
      m.vector = nullptr;
      m.nrElemente = 0;
    }

    Multime(const Multime& m) : nrElemente(m.nrElemente) {
      vector = new T[nrElemente];
      for (int i = 0; i < nrElemente; i++) {
        vector[i] = m.vector[i];
      }
    }

    void citire() {
      for (int i = 0; i < nrElemente; i++) {
        std::cout << "el[" << i << "] = ";
        std::cin >> vector[i];
      }
    }

    void afisare() {
      std::cout << "Elementele vectorului - (";
      for (int i = 0; i < nrElemente - 1; i++) {
        std::cout << vector[i] << ", ";
      }
      if (nrElemente > 0) {
        std::cout << vector[nrElemente - 1];
      }
      std::cout << ")" << std::endl;
    }

    T operator!(){
      T max = *vector;
      for (int i = 1; i < nrElemente; i++) {
        if (vector[i] > max) {
          max = vector[i];
        }
      }
      return max;
    }

    Multime operator+(const Multime& b) const {
      int maxSize = (nrElemente > b.nrElemente) ? nrElemente : b.nrElemente;

      Multime result(maxSize);

      for (int i = 0; i < maxSize; i++) {
        if (i < nrElemente && i < b.nrElemente) {
          result.vector[i] = vector[i] + b.vector[i];
        }
        else if (i < nrElemente) {
          result.vector[i] = vector[i];
        }
        else {
          result.vector[i] = b.vector[i];
        }
      }

      return result;
    }
    
    ~Multime() {
    }

  private:
    T* vector;
    int nrElemente;
};
