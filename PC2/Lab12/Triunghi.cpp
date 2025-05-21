#include "Triunghi.h"
#include <iostream>
#include <math.h>

double distanta(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

Triunghi::Triunghi(int a1, int a2, int b1, int b2, int c1, int c2) {
  double a = distanta(a1, a2, b1, b2);
  double b = distanta(b1, b2, c1, c2);
  double c = distanta(a1, a2, c1, c2);

  if (a + b > c && a + c > b && b + c > a) {
    ax = a1; ay = a2;
    bx = b1; by = b2;
    cx = c1; cy = c2;
  } else {
    throw TriunghiErr();
  }
}

double Triunghi::perimetru() {
  return (distanta(ax,ay,bx,by) + distanta(ax,ay,cx,cy) + distanta(bx,by,cx,cy));
}

double Triunghi::semiperimetru() {
  return perimetru() / 2;
}

double Triunghi::arie() {
  return sqrt(semiperimetru() * (semiperimetru() - distanta(ax,ay,bx,by)) * (semiperimetru() - distanta(ax,ay,cx,cy)) * (semiperimetru() - distanta(bx,by,cx,cy)));
}

void Triunghi::afisare() {
  std::cout << "Triunghi cu coordonatele (" << ax << "," << ay << "),(" << bx << "," << by << "),(" << cx << "," << cy << ") aria " << arie() << " si perimetrul " << perimetru() << std::endl;
}
