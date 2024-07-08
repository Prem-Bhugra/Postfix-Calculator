#include "stack_b.h"
#include <iostream>
#include <cstring>

Stack_B::Stack_B() : size(0), capacity(1024) {
    stack = new int[capacity];
}

Stack_B::~Stack_B() {
    delete[] stack;
}

void Stack_B::resize(int new_capacity) {
    int* new_stack = new int[new_capacity];
    std::memcpy(new_stack, stack, size * sizeof(int));
    delete[] stack;
    stack = new_stack;
    capacity = new_capacity;
}

void Stack_B::push(int data) {
    if (size == capacity) {
        resize(capacity * 2);
    }
    stack[size++] = data;
}

int Stack_B::pop() {
    if (size == 0) throw std::runtime_error("Empty Stack");
    int value = stack[--size];
    if (size < capacity / 4 && capacity > 1024) {
        resize(capacity / 2);
    }
    return value;
}

int Stack_B::get_element_from_top(int idx) {
    if (idx >= size) throw std::runtime_error("Index out of range");
    return stack[size - 1 - idx];
}

int Stack_B::get_element_from_bottom(int idx) {
    if (idx >= size) throw std::runtime_error("Index out of range");
    return stack[idx];
}

void Stack_B::print_stack(bool top) {
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

int Stack_B::add() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = a + b;
    push(result);
    return result;
}

int Stack_B::subtract() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = b - a;
    push(result);
    return result;
}

int Stack_B::multiply() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = a * b;
    push(result);
    return result;
}

int Stack_B::divide() {
    if (size < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    if (a == 0) throw std::runtime_error("Divide by Zero Error");
    int result = b / a;
    push(result);
    return result;
}

int* Stack_B::get_stack() {
    return stack;
}

int Stack_B::get_size() {
    return size;
}
