#ifndef NODE_C_H
#define NODE_C_H

class Node {
public:
    Node(int data);
    int data;
    Node* prev;
    Node* next;
};

#endif // NODE_C_H
