#include <iostream>
#include "lista.h"

int main() {

  Elem* headX = nullptr;
  Elem* headY = nullptr;

  createList(headX);
  createList(headY);

  Elem* headZ1 = nullptr;
  Elem* headY1 = nullptr;
  cpyList(headX, headZ1);
  cpyList(headY, headY1);
  concat(headZ1, headY1);
  
  Elem* headZ2 = nullptr;
  Elem* headX2 = nullptr;
  Elem* headY2 = nullptr;
  cpyList(headX, headX2);
  cpyList(headY, headY2);
  interclasare(headZ2, headX2, headY2);

  displayList(headX);
  displayList(headY);
  displayList(headZ1);
  displayList(headZ2);

  deleteList(headZ2);
  deleteList(headZ1);
  deleteList(headX);
  deleteList(headY);

  return 0;
}
