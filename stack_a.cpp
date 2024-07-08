#include "stack_a.h"
#include <iostream>

Stack_A::Stack_A() : size(0) {}

void Stack_A::push(int data) {
    if (size == 1024) throw std::runtime_error("Stack Full");
    stack[size++] = data;
}

int Stack_A::pop() {
    if (size == 0) throw std::runtime_error("Empty Stack");
    return stack[--size];
}

int Stack_A::get_element_from_top(int idx) {
    if (idx >= size) throw std::runtime_error("Index out of range");
    return stack[size - 1 - idx];
}

int Stack_A::get_element_from_bottom(int idx) {
    if (idx >= size) throw std::runtime_error("Index out of range");
    return stack[idx];
}

void Stack_A::print_stack(bool top) {
    if (top) {
        for (int i = size - 1; i >= 0; --i) {
            std::cout << stack[i] << std::endl;
        }
    } else {
        for (int i = 0; i < size; ++i) {
            std::cout << stack[i] << std::endl;
        }
    }
}

int Stack_A::add() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = a + b;
    push(result);
    return result;
}

int Stack_A::subtract() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = b - a;
    push(result);
    return result;
}

int Stack_A::multiply() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = a * b;
    push(result);
    return result;
}

int Stack_A::divide() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    if (a == 0) throw std::runtime_error("Divide by Zero Error");
    int result = b / a;
    push(result);
    return result;
}

int* Stack_A::get_stack() {
    return stack;
}

int Stack_A::get_size() {
    return size;
}
