#pragma once
#define MAX_DIM 10

typedef int Atom;

struct Node {
  Atom data;
  Node* next;
};
typedef Node* Stack;

struct StaticS {
  Atom v[MAX_DIM];
  int top;
};

void init(Stack&);
void push(Stack&, Atom);
void pop(Stack&);
Atom top(Stack&);
bool isEmpty(Stack&);
void clear(Stack&);

void initV(StaticS&);
bool isEmptyV(const StaticS&);
bool isFullV(const StaticS&);
Atom topV(const StaticS&);
void pushV( StaticS&, Atom);
void popV( StaticS&);
