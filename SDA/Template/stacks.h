#pragma once

struct Node {
  int data;
  Node* next;
};

void push(Node*&, int);
void pop(Node*&);
int peek(Node*);
bool isEmpty(Node*);
int size(Node*);
void clear(Node*);

#endif // STACKS_H
