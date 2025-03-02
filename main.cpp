#include "Node.h"

// Unit Tests
void test_move_constructor() {
    std::cout << "Testing Move Constructor:\n";
    Node* original = build_linked_list(5);
    std::cout << "Original List: ";
    print_linked_list(original);

    Node moved(std::move(*original));
    std::cout << "Moved List: ";
    print_linked_list(&moved);

    delete_entire_linked_list(original);
}

void test_move_assignment_operator() {
    std::cout << "\nTesting Move Assignment Operator:\n";
    Node* list1 = build_linked_list(3);
    Node* list2 = build_linked_list(5);

    std::cout << "List1 Before Move: ";
    print_linked_list(list1);
    std::cout << "List2 Before Move: ";
    print_linked_list(list2);

    *list1 = std::move(*list2);

    std::cout << "List1 After Move: ";
    print_linked_list(list1);
    std::cout << "List2 After Move (should be empty): ";
    print_linked_list(list2);

    delete_entire_linked_list(list1);
    delete_entire_linked_list(list2);
}

int main() {
    test_move_constructor();
    test_move_assignment_operator();
    return 0;
}
