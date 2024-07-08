#include "list.h"
#include <iostream>
#include <stdexcept>

List::List() : head(nullptr), tail(nullptr), size(0) {}

List::~List() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void List::push_front(int data) {
    Node* new_node = new Node(data);
    if (!head) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    ++size;
}

int List::pop_front() {
    if (!head) throw std::runtime_error("Empty Stack");
    Node* temp = head;
    int data = temp->data;
    head = head->next;
    if (head) head->prev = nullptr;
    else tail = nullptr;
    delete temp;
    --size;
    return data;
}

int List::get_element_from_top(int idx) {
    if (idx >= size) throw std::runtime_error("Index out of range");
    Node* current = head;
    for (int i = 0; i < idx; ++i) {
        current = current->next;
    }
    return current->data;
}

int List::get_element_from_bottom(int idx) {
    if (idx >= size) throw std::runtime_error("Index out of range");
    Node* current = tail;
    for (int i = 0; i < idx; ++i) {
        current = current->prev;
    }
    return current->data;
}

void List::print_stack(bool top) {
    if (top) {
        Node* current = head;
        while (current) {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    } else {
        Node* current = tail;
        while (current) {
            std::cout << current->data << std::endl;
            current = current->prev;
        }
    }
}

int List::get_size() {
    return size;
}
