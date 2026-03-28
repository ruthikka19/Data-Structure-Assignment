**Name:** Ruthikka Arunkumar  
**Roll No.:** 33  
**Course:** DSA (Data Structure and Algorithms)

---

# Data Structure Assignment

A collection of fundamental data structure implementations in C, covering stacks, queues, and related algorithms.

## Programs

### Q1.c - String Reversal using Stack
Reverses a given string using a stack data structure.
- **Concept:** LIFO (Last In First Out)
- **Input:** A string
- **Output:** The reversed string

### Q2.c - Balanced Parentheses Checker
Checks whether parentheses, braces, and brackets are balanced in an expression.
- **Concept:** Stack application for bracket matching
- **Input:** An expression with parentheses, braces, and brackets
- **Output:** "Balanced Expression" or "Unbalanced Expression"

### Q3.c - Next Greater Element
Finds the next greater element for each element in an array using a stack.
- **Concept:** Stack-based array traversal
- **Input:** Number of elements and the array
- **Output:** Each element and its next greater element

### Q4.c - Printer Queue System
A simulation of a printer queue using a queue data structure with interactive menu.
- **Concept:** FIFO (First In First Out) queue operations
- **Features:**
  - Add documents to queue
  - Print documents (remove from queue)
  - Display pending documents
- **Interactive menu-driven system**

### Q5.c - Circular Queue System
A complete implementation of a circular queue with all basic operations.
- **Concept:** FIFO with circular buffer to optimize memory usage
- **Size:** MAX = 5 elements
- **Features:**
  - Enqueue: Add elements to the queue
  - Dequeue: Remove elements from the queue
  - Peek: View front element
  - Display: Show all queue elements
  - Check if queue is empty or full
- **Interactive menu-driven system** with user input

## How to Compile and Run

### Using GCC (from command line)
```bash
gcc Q1.c -o Q1
./Q1
```

### Using VS Code
1. Open the `.c` file
2. Press `Ctrl+Shift+B` to build
3. Run the generated `.exe` file

## Stack Operations
- Push: Add element to stack
- Pop: Remove element from stack
- Peek: View top element

## Queue Operations
- Enqueue: Add element to queue
- Dequeue: Remove element from queue
- Display: View all elements

## Requirements
- GCC compiler or any C compiler
- Windows/Linux/Mac compatible

## Author
Ruthikka

## Version
1.0 - Initial commit with Q1-Q4 programs
2.0 - Added Q5 Circular Queue implementation
