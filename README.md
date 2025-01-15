Push_Swap Project
=================

Description
-----------

The `push_swap` project is a sorting algorithm challenge where the goal is to sort a stack of integers using a limited set of operations. The project involves two stacks, **Stack A** and **Stack B**, and a set of operations to manipulate the stacks. The objective is to sort the integers in **Stack A** in ascending order using the fewest number of operations possible.

This project is an excellent way to learn about sorting algorithms, stack data structures, and optimization techniques. The algorithm implemented here uses a combination of **pre-sorting** and **sorting back** to efficiently sort the stack.

* * * * *

Algorithm Overview
------------------

The algorithm consists of two main phases:

1.  **Pre-Sort**:

    -   Divide the stack into chunks based on the size of the stack.

    -   Push elements from **Stack A** to **Stack B** based on their values within a specific range.

    -   This phase reduces the problem size and prepares the stack for efficient sorting.

2.  **Sort Back**:

    -   Sort the elements in **Stack B** and push them back to **Stack A** in ascending order.

    -   This phase ensures that the final stack is fully sorted.

### Key Steps

1.  **Input Validation**:

    -   Ensure the input consists of valid integers.

    -   Check for duplicates in the input.

    -   Handle edge cases, such as an empty input or a single integer.

2.  **Pre-Sort**:

    -   Determine the chunk size based on the length of the stack.

    -   Push elements from **Stack A** to **Stack B** if they fall within the current chunk range.

    -   If an element is smaller than the current range, push it to **Stack B** and rotate **Stack B** to keep smaller elements at the bottom.

    -   Rotate **Stack A** to find the next element within the range.

3.  **Sort Back**:

    -   Find the maximum value in **Stack B**.

    -   Rotate **Stack B** to bring the maximum value to the top.

    -   Push the maximum value back to **Stack A**.

    -   Repeat until **Stack B** is empty.

4.  **Final Sort**:

    -   Ensure **Stack A** is fully sorted in ascending order.

    -   Handle any remaining elements in **Stack B** if necessary.

* * * * *

Error Handling
--------------

The algorithm includes robust error handling to ensure correct execution:

1.  **Invalid Input**:

    -   If the input contains non-integer values, the program will exit with an error message.

    -   If duplicates are found in the input, the program will exit with an error message.

2.  **Edge Cases**:

    -   If the input is empty or contains only one integer, the program will exit immediately, as no sorting is needed.

3.  **Memory Allocation**:

    -   If memory allocation fails during stack operations, the program will free any allocated memory and exit with an error message.

4.  **Stack Operations**:

    -   If an invalid operation is attempted (e.g., rotating an empty stack), the program will handle it gracefully and continue execution.

* * * * *

Operations
----------

The following operations are used in the `push_swap` project:

| Operation | Description |
| --- | --- |
| `sa` | Swap the first two elements of **Stack A**. |
| `sb` | Swap the first two elements of **Stack B**. |
| `ss` | Perform `sa` and `sb` simultaneously. |
| `pa` | Push the first element of **Stack B** to **Stack A**. |
| `pb` | Push the first element of **Stack A** to **Stack B**. |
| `ra` | Rotate **Stack A** (shift all elements up by one, the first becomes last). |
| `rb` | Rotate **Stack B** (shift all elements up by one, the first becomes last). |
| `rr` | Perform `ra` and `rb` simultaneously. |
| `rra` | Reverse rotate **Stack A** (shift all elements down, the last becomes first). |
| `rrb` | Reverse rotate **Stack B** (shift all elements down, the last becomes first). |
| `rrr` | Perform `rra` and `rrb` simultaneously. |

* * * * *

Performance
-----------

The algorithm is optimized to handle stacks of different sizes:

-   For small stacks (≤ 5 elements), it uses a simple sorting approach.

-   For medium-sized stacks (6--100 elements), it divides the stack into smaller chunks.

-   For large stacks (> 100 elements), it uses larger chunks to minimize the number of operations.

* * * * *

Example Workflow
----------------

1.  **Input**: `3 1 4 2 5`

2.  **Pre-Sort**:

    -   Push elements within the range to **Stack B**.

    -   Rotate **Stack A** to find the next element in range.

3.  **Sort Back**:

    -   Find the maximum value in **Stack B**.

    -   Rotate **Stack B** to bring the maximum value to the top.

    -   Push the maximum value back to **Stack A**.

4.  **Output**: `1 2 3 4 5`
   
* * * * *

Benchmark
---------

The algorithm is optimized to handle stacks of different sizes efficiently. Below are the benchmark results for sorting random numbers:

### Performance Metrics

1.  **Sorting 100 Random Numbers**:

    -   **Target**: Less than 700 moves.

    -   **Achieved**: The algorithm consistently sorts 100 random numbers in **less than 700 moves**.

2.  **Sorting 500 Random Numbers**:

    -   **Target**: Less than 5500 moves.

    -   **Achieved**: The algorithm consistently sorts 500 random numbers in **less than 5500 moves**.

### Complexity Analysis

The algorithm's time complexity can be analyzed as follows:

1.  **Pre-Sort Phase**:

    -   The algorithm divides the stack into chunks and processes each element.

    -   For a stack of size `n`, the pre-sort phase has a complexity of **O(n log n)**.

2.  **Sort Back Phase**:

    -   The algorithm sorts the elements in **Stack B** and pushes them back to **Stack A**.

    -   This phase also has a complexity of **O(n log n)**.

3.  **Overall Complexity**:

    -   The combined complexity of the algorithm is **O(n log n)**, making it efficient for large stacks.
* * * * *

Contributing
------------

Contributions are welcome! If you have suggestions for improving the algorithm or adding new features, feel free to open an issue or submit a pull request.

* * * * *


Acknowledgments
---------------

-   Thanks to the 42 School for providing the project guidelines and inspiration.

-   Special thanks to the open-source community for their valuable resources and tools.
