#include "stacks.h"

void push(Node*& top, int value) {
    Node* newNode = new Node(value, top);
    top = newNode;
}

void pop(Node*& top, ) {
    if (isEmpty()) {
        throw std::underflow_error("Pop from empty stack");
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

int peek(Node* top) {
    if (isEmpty()) {
        throw std::underflow_error("Peek on empty stack");
    }
    return top->data;
}

bool isEmpty(Node* top){
    return top == nullptr;
}

void clear(Node* top) {
    while (!isEmpty(Node* top)) {
        pop();
    }
}
