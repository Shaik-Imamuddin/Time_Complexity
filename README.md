# Time_Complexity

What exactly is Time Complexity?

Time Complexity measures how the execution time of an algorithm grows as the input size (n) increases.

It doesn’t measure exact time (seconds/ms). It measures growth trend

Because in real-world systems, scalability matters more than speed on small inputs.

Why Big O Notation?

Big O helps us to:
    ->Predict performance before execution
    ->Choose the right algorithm
    ->Build scalable systems


Types of Time Complexity (Deep Understanding):

O(1) — Constant Time
Execution remains unchanged regardless of input size.
Direct access operations

----------------------------------------------

O(log n) — Logarithmic Time
Input size reduces at each step.
✔ Binary Search
✔ Divide & Conquer
Very efficient for large datasets.

----------------------------------------------

O(n) — Linear Time
Every element is processed once.
✔ Traversing arrays, linked lists

----------------------------------------------

O(n log n) — Linearithmic Time
Combination of splitting + processing
✔ Efficient sorting algorithms

Considered optimal for comparison-based sorting.

----------------------------------------------

O(n²) — Quadratic Time
Nested loops over the same data
✔ Bubble Sort, Selection Sort
Performance drops quickly as n grows.

----------------------------------------------

O(2ⁿ) — Exponential Time
Each step doubles the work
✔ Recursive Fibonacci (without optimization)

Becomes unusable even for moderate inputs.

----------------------------------------------

O(n!) — Factorial Time
All possible arrangements are computed
✔ Permutations, Traveling Salesman (brute force)

Explodes faster than exponential.

----------------------------------------------

Best Case vs Worst Case vs Average Case

Best Case → Minimum time taken
Average Case → Typical performance
Worst Case → Maximum time taken


Think about complexity before coding
Avoid unnecessary nested loops
Use appropriate data structures