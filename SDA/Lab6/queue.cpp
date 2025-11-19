#include "queue.h"

void initSQ(QueueS& q){
  q.head = 0;
  q.tail = 0;
}

bool isEmptySQ(const QueueS& q) {
  return q.head == q.tail;
}

bool isFullSQ(const QueueS& q) {
  return (q.tail + 1) % DIMMAX == q.head;
}

void putSQ(QueueS& q, Atom val) {
  if (isFullSQ(q)) {
    std::cout << "Coada este plina!" << std::endl;
    return;
  }
  q.vect[q.tail] = val;
  q.tail = (q.tail + 1) % DIMMAX;
}

void getSQ(QueueS& q) {
  if (isEmptySQ(q)) {
    std::cout << "Coada este goala!" << std::endl;
    return;
  }
  q.head = (q.head + 1) % DIMMAX;
}

Atom frontSQ(const QueueS& q) {
  if (isEmptySQ(q)) {
    std::cout << "Coada goala!" << std::endl;
    return 0;
  }
  return q.vect[q.head];
}

void init(Queue& q){
  q.head = nullptr;
  q.tail = nullptr;
}

bool isEmpty(const Queue& q){
  return q.head == nullptr && q.tail == nullptr;
}

void put(Queue& q, Atom val) {
  Elem* ins = new Elem();
  ins->data = val;
  if (isEmpty(q)) {
    q.head = ins;
    q.tail = q.head;
  } else {
    q.tail->next = ins;
    q.tail = ins;
  }
}

void get(Queue& q) {
  if (isEmpty(q)) {
    std::cout << "Coada este goala!\n";
    return;
  }

  Elem* temp = q.head;
  q.head = q.head->next;

  if (q.head == nullptr) {
    q.tail = nullptr;
  }

  delete temp;
}

Atom front(const Queue& q) {
  if (isEmpty(q)) {
    std::cout << "Coada goala!\n";
    return 0;
  }
  return q.head->data;
}

void clear(Queue& q) {
  while (q.head != nullptr) {get(q);}
}
