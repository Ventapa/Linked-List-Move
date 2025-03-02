#include "Node.h"

// Constructor
Node::Node(int value) : data(value), next(nullptr) {}

// Copy Constructor
Node::Node(const Node& other) : data(other.data), next(nullptr) {
    if (other.next) {
        next = new Node(*other.next);
    }
}

// Move Constructor
Node::Node(Node&& other) noexcept : data(other.data), next(other.next) {
    other.next = nullptr; // Prevent double deletion
}

// Move Assignment Operator
Node& Node::operator=(Node&& other) noexcept {
    if (this != &other) {
        delete next; // Clean up existing resource
        data = other.data;
        next = other.next;
        
        // Fix: Properly clear the moved object
        other.data = 0;  
        other.next = nullptr; 
    }
    return *this;
}

// Destructor
Node::~Node() {
    delete next;
}

// Function to build a linked list
Node* build_linked_list(int n) {
    if (n <= 0) return nullptr;

    Node* head = new Node(1);
    Node* current = head;

    for (int i = 2; i <= n; ++i) {
        current->next = new Node(i);
        current = current->next;
    }
    return head;
}

// Function to print the linked list
void print_linked_list(Node* root) {
    Node* temp = root;
    while (temp) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}

// Function to delete the entire linked list
void delete_entire_linked_list(Node*& root) {
    while (root) {
        Node* temp = root;
        root = root->next;
        temp->next = nullptr;
        delete temp;
    }
}
