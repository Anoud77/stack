# C++ Stack Implementation

## About

This C++ project implements a Stack data structure using two different approaches:

1.  **Array-based Stack:** A stack is implemented using a dynamically allocated array.
2.  **Linked List-based Stack:** A stack is implemented using a singly linked list.

The project provides a clear demonstration of the Last-In, First-Out (LIFO) principle using both common data structure techniques.

## Features

**Array-based Stack:**

* `Stack(int size)`: Constructor to create a stack of a specified size.
* `isEmpty()`: Checks if the stack is empty.
* `isFull()`: Checks if the stack is full.
* `push(int value)`: Adds an element to the top of the stack.
* `pop()`: Removes and returns the element at the top of the stack.
* `peek()`: Returns the element at the top of the stack without removing it.
* `display()`: Prints the contents of the stack.

**Linked List-based Stack:**

* `push(node **top, int value)`: Adds a new node with the given value to the top of the linked list stack.
* `pop(node **top)`: Removes the node at the top of the linked list stack.
* `displayStack(node **top)`: Prints the contents of the linked list stack.

## Technologies Used

* C++

## Setup and Installation

1.  **Prerequisites:**
    * A C++ compiler (e.g., g++, Clang, Microsoft Visual C++).

2.  **Downloading the Project:**
    * Clone the repository from GitHub:

        ```bash
        git clone <repository_url>
        cd <project_directory>
        ```

        (Replace `<repository_url>` with the actual URL of your GitHub repository, and `<project_directory>` with the name of the directory where the project is cloned.)

3.  **Compilation:**
    * Compile the C++ source file (e.g., `main.cpp`) using your C++ compiler.  For example, using g++:

        ```bash
        g++ main.cpp -o stack_program
        ```
        (This will create an executable file named `stack_program`.  If your main file is named differently, adjust the command accordingly.)

## Usage

1.  **Run the application:** Execute the compiled program from the command line:

        ```bash
        ./stack_program #For Linux/MacOS
        ```bash
        stack_program.exe #For Windows
        ```

2.  **Demonstration:** The `main()` function in the code demonstrates the usage of both the array-based Stack and the linked list-based stack. The program will:

    * Create an array-based stack.
    * Push several integer values onto the stack.
    * Display the stack's contents.
    * Show the top element using `peek()`.
    * Pop an element.
    * Show the new top element.
    * Display the updated stack.
    * Create a linked list-based stack.
    * Push several values onto the linked list stack.
    * Display the linked list stack's contents.
    * Pop an element from the linked list stack.
    * Display the linked list stack's contents after the pop operation.

    The output will be printed to the console.  You can modify the `main()` function to experiment with different stack operations.

## Code Explanation

* **Array-based Stack:**
    * The `Stack` class encapsulates the array, the `top` index, and the `size`.
    * The constructor initializes the stack.
    * `isEmpty()` and `isFull()` check the stack's state.
    * `push()` adds an element, and `pop()` removes an element.
    * `peek()` allows viewing the top element without removing it.
    * `display()` prints the stack elements.

* **Linked List-based Stack:**
    * The `node` struct defines the structure of each node in the linked list (data and a pointer to the next node).
    * `push()` creates a new node, assigns the data, and inserts it at the beginning of the list (which acts as the top of the stack).
    * `pop()` removes the first node in the list.
    * `displayStack()` traverses the list and prints the data in each node.

## Author

Anoud Alfaydi
