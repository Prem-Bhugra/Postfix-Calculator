#ifndef STACK_B_H
#define STACK_B_H

#include <stdexcept>

class Stack_B {
public:
    Stack_B();
    ~Stack_B();
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
    int* stack;
    int size;
    int capacity;
    void resize(int new_capacity);
};

#endif // STACK_B_H
