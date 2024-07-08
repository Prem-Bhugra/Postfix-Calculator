#include "stack_a.h"
#include "stack_b.h"
#include "stack_c.h"
#include <iostream>

using namespace std;

int main() {
    // Testing Stack_A
    Stack_A stackA;
    stackA.push(5);
    stackA.push(10);
    cout << "Stack_A top element: " << stackA.pop() << endl;

    // Testing Stack_B
    Stack_B stackB;
    stackB.push(15);
    stackB.push(20);
    cout << "Stack_B top element: " << stackB.pop() << endl;

    // Testing Stack_C
    Stack_C stackC;
    stackC.push(25);
    stackC.push(30);
    cout << "Stack_C top element: " << stackC.pop() << endl;

    return 0;
}
