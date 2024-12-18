# C++ Vector: Inefficient Memory Allocation When Exceeding Reserved Capacity

This example demonstrates a common issue when using `std::vector` in C++: inefficiency when adding elements beyond the initially reserved capacity.  While `reserve()` allocates memory, adding elements exceeding this capacity triggers reallocation, leading to performance degradation.

## Bug Description

The `bug.cpp` file shows a `std::vector` with initially reserved space for 10 elements.  However, additional elements are pushed back, causing the vector to resize multiple times which can affect the efficiency of the program, especially if you have a large amount of data to process.

## Solution

The `bugSolution.cpp` file demonstrates efficient ways to manage memory when using `std::vector`.  Using `reserve()` correctly, resizing efficiently when the element number is already known and other best practices avoid performance issues related to continuous memory reallocations. 

## How to reproduce

1. Compile `bug.cpp` and run the executable. Observe the potential for multiple memory reallocations.
2. Compile `bugSolution.cpp` and run the executable. This code demonstrates more efficient techniques using `reserve()` or `resize()` efficiently.