# 0x1E. C - Search Algorithms

This repository contains implementations of various search algorithms in the C programming language. The algorithms are designed to efficiently locate elements within arrays or other data structures.

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables are allowed
- Each file should contain no more than 5 functions
- Only the `printf` function from the standard library is permitted; calls to other functions like `strdup`, `malloc`, etc., are forbidden
- `main.c` files shown in examples can be used for testing but do not need to be pushed to the repository; custom `main.c` files might be used during compilation by the reviewers
- Prototypes of all functions should be included in the header file named `search_algos.h`
- Header files should have include guards

## Description of Search Algorithms

### Linear Search
Linear search is a simple searching algorithm that sequentially checks each element of the data structure until the desired element is found or the end of the data structure is reached. It is generally used for small lists or unsorted data.

### Binary Search
Binary search is a more efficient search algorithm that works on sorted arrays. It follows the principle of divide and conquer, repeatedly dividing the search interval in half until the target element is found.

### Jump Search
Jump search is a searching algorithm for sorted arrays. It works by jumping ahead by fixed steps and then performing a linear search in the smaller range until the target element is found.

### Interpolation Search
Interpolation search is an improvement over binary search for situations where the values in a sorted array are uniformly distributed. It calculates the probable position of the target element based on its value and performs a binary search accordingly.

### Exponential Search
Exponential search is especially useful when the size of the data structure is unknown. It involves two steps: finding a range where the target element might be present using exponential jumps, and then performing a binary search within that range.

### Fibonacci Search
Fibonacci search is a method of searching a sorted array using a divide and conquer algorithm that narrows down possible locations with the help of Fibonacci numbers. It is similar to binary search but divides the array into unequal parts.

### Sublist Search (Search a linked list in another list)
Sublist search is a problem that involves searching for one linked list (sublist) within another linked list (main list). It can be solved using various techniques such as brute force, hashing, or KMP algorithm.

### Search in a Maze
Searching in a maze involves finding a path from a starting position to a goal position in a maze. It can be solved using algorithms like Depth First Search (DFS) or Breadth First Search (BFS).

### The Knight’s tour problem
The Knight's tour problem is a classic chess problem where the task is to find a sequence of moves for a knight on a chessboard such that the knight visits every square exactly once.

## Usage
To use these search algorithms, include the `search_algos.h` header file in your C program and call the appropriate function with the required parameters.

## Author
This project is authored by [Zerihun Shiferaw](https://github.com/Zed-bard/alx-low_level_programming/tree/master/0x1E-search_algorithms) and maintained by [ALX](https://www.alxafrica.com/). It is licensed under the MIT License.
