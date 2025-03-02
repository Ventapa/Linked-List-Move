Linked List Move Implementation

This project implements a linked list in C++ with move semantics, including a move constructor and move assignment operator. The program also includes unit tests to verify the correctness of these features.

📂 File Structure

Node.h - Contains the Node struct and function declarations.

Node.cpp - Implements the Node methods and linked list functions.

main.cpp - Contains unit tests to verify the move operations.

🔧 Compilation Instructions

To compile and run the project, follow these steps:

Using g++ (Linux/macOS/Windows with MinGW)

Compile the code:

g++ Node.cpp main.cpp -o linked_list_test

Run the compiled program:

./linked_list_test  # (Linux/macOS)
linked_list_test.exe  # (Windows)

Using Microsoft Visual Studio (Windows)

Open Visual Studio and create a New C++ Console Application.

Add Node.h, Node.cpp, and main.cpp to the project.

Click Build and Run.

🧪 Unit Tests

After compilation, the program will automatically run the following tests:

Move Constructor Test: Ensures that a linked list can be correctly moved to a new object.

Move Assignment Operator Test: Ensures a linked list can be reassigned using move semantics.

✅ Expected Output

Testing Move Constructor:
Original List: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
Moved List: 1 -> 2 -> 3 -> 4 -> 5 -> NULL

Testing Move Assignment Operator:
List1 Before Move: 1 -> 2 -> 3 -> NULL
List2 Before Move: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
List1 After Move: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
List2 After Move (should be empty): NULL

🛠️ Troubleshooting

If you encounter errors during compilation:

Ensure you have g++ installed (g++ --version).

Make sure all three files (Node.h, Node.cpp, main.cpp) are in the same directory.

Try using an online compiler like OnlineGDB if needed.
