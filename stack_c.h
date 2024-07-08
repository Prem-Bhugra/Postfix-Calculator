#ifndef STACK_C_H
#define STACK_C_H

#include "list.h"

class Stack_C {
public:
    Stack_C();
    void push(int data);
    int pop();
    int get_element_from_top(int idx);
    int get_element_from_bottom(int idx);
    void print_stack(bool top);
    int add();
    int subtract();
    int multiply();
    int divide();
    List* get_stack();
    int get_size();
private:
    List stack;
};

#endif // STACK_C_H
