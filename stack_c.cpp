#include "stack_c.h"
#include <stdexcept>
#include <iostream>

Stack_C::Stack_C() {}

void Stack_C::push(int data) {
    stack.push_front(data);
}

int Stack_C::pop() {
    return stack.pop_front();
}

int Stack_C::get_element_from_top(int idx) {
    return stack.get_element_from_top(idx);
}

int Stack_C::get_element_from_bottom(int idx) {
    return stack.get_element_from_bottom(idx);
}

void Stack_C::print_stack(bool top) {
    stack.print_stack(top);
}

int Stack_C::add() {
    if (stack.get_size() < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = a + b;
    push(result);
    return result;
}

int Stack_C::subtract() {
    if (stack.get_size() < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = b - a;
    push(result);
    return result;
}

int Stack_C::multiply() {
    if (stack.get_size() < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    int result = a * b;
    push(result);
    return result;
}

int Stack_C::divide() {
    if (stack.get_size() < 2) throw std::runtime_error("Not Enough Arguments");
    int a = pop();
    int b = pop();
    if (a == 0) throw std::runtime_error("Divide by Zero Error");
    int result = b / a;
    push(result);
    return result;
}

List* Stack_C::get_stack() {
    return &stack;
}

int Stack_C::get_size() {
    return stack.get_size();
}
