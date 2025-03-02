#ifndef NODE_H
#define NODE_H

#include <iostream>

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int value);

    // Copy Constructor
    Node(const Node& other);

    // Move Constructor
    Node(Node&& other) noexcept;

    // Move Assignment Operator
    Node& operator=(Node&& other) noexcept;

    // Destructor
    ~Node();
};

// Function Declarations
Node* build_linked_list(int n);
void print_linked_list(Node* root);
void delete_entire_linked_list(Node*& root);

#endif // NODE_H
