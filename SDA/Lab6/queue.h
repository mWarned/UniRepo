#pragma once

#include <iostream>
#pragma once

#define DIMMAX 8
typedef int Atom;

struct QueueS {
  int head,tail;
  Atom vect[DIMMAX];
};

struct Elem {
  Atom data;
  Elem* next;
};

struct Queue {
  Elem* head;
  Elem* tail;
};

// Static Queue
void initSQ(QueueS& Q);
bool isEmptySQ(const QueueS& Q);
bool isFullSQ(const QueueS& Q);
void putSQ(QueueS& Q, Atom a);
void getSQ(QueueS& Q);
Atom frontSQ(const QueueS& Q);

// Dynamic Queue
void init(Queue& Q);
bool isEmpty(const Queue& Q);
void put(Queue& Q, Atom val);
void get(Queue& Q);
Atom front(const Queue& Q);
void clear(Queue& Q);
