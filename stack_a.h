#ifndef STACK_A_H
#define STACK_A_H

#include <stdexcept>

class Stack_A {
public:
    Stack_A();
    void push(int data);
    int pop();
    int get_element_from_top(int idx);
    int get_element_from_bottom(int idx);
    void print_stack(bool top);
    int add();
    int subtract();
    int multiply();
    int divide();
    int* get_stack();
    int get_size();
private:
    int stack[1024];
    int size;
};

#endif // STACK_A_H
