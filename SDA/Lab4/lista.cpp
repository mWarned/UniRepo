#include "lista.h"

using namespace std;

void createDLL(DLList& lista) {
  lista.first = lista.last = nullptr;
  int x;
  cout << "Introduce elemente pana la 0:";
  cin >> x;
  while (x) {
    insertDataDLL(lista, x);
    cin >> x;
  }
}

void insertDataDLL(DLList& lista, int val) {
  Elem* ins = new Elem();
  ins->data = val;
  ins->prev = nullptr;
  ins->next = lista.first;

  if (lista.first) {
    lista.first->prev = ins;
  } else {
    lista.last = ins;
  }
  lista.first = ins;
}

void displayDLL(const DLList& lista) {
  if (!lista.first) {
    cout << "Lista este goala!";
    return;
  }
  for (Elem* p = lista.first; p; p = p->next)
    cout << p->data << " ";
  cout << endl;
}

bool deleteOnPosDLL(DLList& lista, int pos) {
  if (!lista.first || pos < 0) return false;

  Elem* cur = lista.first;
  for (int i = 0; i < pos; ++i) {
    if (!cur) return false;
    cur = cur->next;
  }
  if (!cur) return false;

  if (cur->prev) cur->prev->next = cur->next;
  else lista.first = cur->next;

  if (cur->next) cur->next->prev = cur->prev;
  else lista.last = cur->prev;

  delete cur;
  return true;
}

void deleteDLL(DLList& lista) {
  Elem* p = lista.first;
  while (p) {
    Elem* temp = p;
    p = p->next;
    delete temp;
  }
  lista.first = lista.last = nullptr;
}

void insertOnPosDLL(DLList& lista, int val, int pos) {
  if (pos < 0) return;
  if (pos == 0) {
    insertDataDLL(lista, val);
    return;
  }

  Elem* cur = lista.first;
  for (int i = 0; i < pos - 1; ++i) {
    if (!cur) return;
    cur = cur->next;
  }
  if (!cur) return;

  Elem* ins = new Elem();
  ins->data = val;
  ins->next = cur->next;
  ins->prev = cur;
  if (cur->next) cur->next->prev = ins;
  else lista.last = ins;
  cur->next = ins;
}

void createCL(Elem*& head) {
  head = nullptr;
  int x = 0;
  cout << "Insereaza elemente pana la 0: ";
  cin >> x;
  while (x) {
    insertDataCL(head, x);
    cin >> x;
  }
}

void insertDataCL(Elem*& head, int val) {
  Elem* ins = new Elem();
  ins->data = val;

  if (!head) {
    ins->next = ins;
    head = ins;
    return;
  }

  Elem* last = head;
  while (last->next != head) {
    last = last->next;
  }

  ins->next = head;
  last->next = ins;
  head = ins;
}

void insertCLToBack(Elem*& head, int val){
  Elem* ins = new Elem();
  ins->data = val;

  if (!head) {
    ins->next = ins;
    head = ins;
    return;
  }

  Elem* last = head;
  while (last->next != head) {
    last = last->next;
  }

  ins->next = head;
  last->next = ins;
}

void displayCL(Elem* head) {
  if (!head) {
    cout << "Lista este goala!";
    return;
  }
  Elem* p = head;
  do {
    cout << p->data << " ";
    p = p->next;
  } while (p != head);
  cout << endl;
}


void reverseCL(Elem*& head) {
  if (!head || head->next == head) return;

  Elem* prev = head;
  Elem* cur = head->next;
  Elem* next;

  do {
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
  } while (cur != head);

  head->next = prev;
  head = prev;
}

void deleteCL(Elem*& head){
  Elem* p = head;
  do {
    Elem* temp = p;
    p = p->next;
    delete temp;
  } while (p != head);
}

void createCLS(ElemS*& head){
  int n = 0;
  std::string name;
  std::cout << "Numarul persoanelor in cerc - ";
  cin >> n;

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  for (int i = 0; i < n; i++) {
    std::cout << "Numele persoanei " << i+1 << ": ";
    std::getline(std::cin, name);
    ElemS* ins = new ElemS();
    ins->name = name;

    if (!head) {
      ins->next = ins;
      head = ins;
    } else {
      ElemS* last = head;
      while (last->next != head) {
        last = last->next;
      }

      ins->next = head;
      last->next = ins;
      head = ins;
    }
  }
}

void displayCLS(ElemS* head){
  ElemS* p = head;
  do {
    std::cout << p->name << " ";
    p = p->next;
  } while (p != head);
  std::cout << std::endl;
}

void deleteCLS(ElemS*& head){
  ElemS* p = head;
  do {
    ElemS* temp = p;
    p = p->next;
    delete temp;
  } while (p != head);
}
