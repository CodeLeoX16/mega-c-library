# Mega C Utility Library (MegaCLib)

A modular C library containing **200+ utility functions**, **STL-like data structures**, and **algorithm implementations** designed for learning data structures, algorithms, and systems programming in C.

This project aims to replicate many features similar to the **C++ STL** but implemented purely in **C language**.

---

## Features

* 200+ utility functions
* STL-like data structures
* Multiple sorting algorithms
* Searching algorithms
* String utilities
* Mathematical utilities
* Matrix operations
* Bit manipulation utilities
* Algorithm benchmarking
* Modular project structure
* Example programs and unit tests

---

## Project Structure

```
mega-c-library/
│
├── include/                # Header files (.h)
│   ├── array.h
│   ├── vector.h
│   ├── list.h
│   ├── stack.h
│   ├── queue.h
│   ├── hashmap.h
│   ├── sort.h
│   ├── search.h
│   ├── string_utils.h
│   ├── math_utils.h
│   ├── matrix.h
│   └── bit_utils.h
│
├── src/                    # Implementation files (.c)
│   ├── array.c
│   ├── vector.c
│   ├── list.c
│   ├── stack.c
│   ├── queue.c
│   ├── hashmap.c
│   ├── sort.c
│   ├── search.c
│   ├── string_utils.c
│   ├── math_utils.c
│   ├── matrix.c
│   └── bit_utils.c
│
├── examples/               # Example programs
│   ├── example_vector.c
│   ├── example_sort.c
│   ├── example_stack.c
│   └── example_hashmap.c
│
├── tests/                  # Unit tests
│   ├── test_array.c
│   ├── test_vector.c
│   ├── test_stack.c
│   ├── test_queue.c
│   ├── test_sort.c
│   └── test_string.c
│
├── benchmark/              # Performance testing
│   ├── sort_benchmark.c
│   └── search_benchmark.c
│
├── docs/                   # Documentation
│   ├── api.md
│   ├── algorithms.md
│   └── data_structures.md
│
├── build/                  # Compiled files
│
├── Makefile                # Build system
├── README.md               # Project description
├── LICENSE
└── .gitignore

```

---

## Modules

### Data Structures

* Vector (Dynamic Array)
* Stack
* Queue
* Linked List
* HashMap

### Algorithms

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort
* Heap Sort
* Binary Search
* Linear Search
* Jump Search

### Array Utilities

* Reverse Array
* Rotate Array
* Merge Arrays
* Remove Duplicates
* Find Second Largest

### String Utilities

* String Length
* String Copy
* String Compare
* String Reverse
* String To Upper
* String To Lower
* Remove Spaces

### Math Utilities

* Factorial
* Power
* GCD / LCM
* Prime Checking
* Fibonacci
* Armstrong Number

### Matrix Operations

* Matrix Addition
* Matrix Subtraction
* Matrix Multiplication
* Matrix Transpose

### Bit Manipulation

* Set Bit
* Clear Bit
* Toggle Bit
* Count Set Bits
* Check Power of Two

---

## Build Instructions

Compile the library using Make:

```
make
```

This generates the static library:

```
libmegac.a
```

---

## Example Usage

```c
#include "vector.h"

int main() {

    Vector v;

    vector_init(&v);

    vector_push(&v,10);
    vector_push(&v,20);
    vector_push(&v,30);

}
```

Compile example:

```
gcc example.c -L. -lmegac
```

---

## Benchmark

The project includes a benchmarking module to compare algorithm performance.

Example comparisons:

* Bubble Sort vs Quick Sort
* Merge Sort vs Heap Sort
* Linear Search vs Binary Search

---

## Goals of This Project

* Practice advanced **C programming**
* Learn **data structures and algorithms**
* Understand **modular software design**
* Create a strong **GitHub portfolio project**

---

## Future Improvements

* Generic containers (support any data type)
* Thread-safe data structures
* Memory pool allocator
* Iterator support
* Dynamic plugin modules

---

## License

This project is open source and available under the **MIT License**.

---

## Author

Created for learning and practicing **systems programming and algorithms in C**.
