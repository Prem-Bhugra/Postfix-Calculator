#ifndef LIST_H
#define LIST_H

#include "node_c.h"

class List {
public:
    List();
    ~List();
    void push_front(int data);
    int pop_front();
    int get_element_from_top(int idx);
    int get_element_from_bottom(int idx);
    void print_stack(bool top);
    int get_size();
private:
    Node* head;
    Node* tail;
    int size;
};

#endif // LIST_H
