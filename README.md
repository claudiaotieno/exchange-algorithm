 Name: Claudia Otieno
 Registration Number: EB3/67309/23


##  Project Description

This project implements the Exchange Sorting Algorithm in C++ without using any built-in sorting functions. The program accepts or generates a list of integers, sorts them in ascending order, and tracks the number of comparisons and swaps performed during execution.

The goal of this project is to understand:

   How exchange sorting works
   How algorithm efficiency is measured
   How performance changes with input size


##  How the Exchange Sort Algorithm Works

Exchange sort works by comparing each element in the list with every other element that comes after it.

  If a smaller element is found, the two elements are swapped.
  This process continues until the entire list is sorted.
  The smallest elements gradually move to the beginning of the list.


##  Step-by-Step Example

Given the list:

`[5, 3, 2]`

Step 1: Compare 5 and 3 → Swap → `[3, 5, 2]`
Step 2: Compare 3 and 2 → Swap → `[2, 5, 3]`
Step 3: Compare 5 and 3 → Swap → `[2, 3, 5]`

Final sorted list: `[2, 3, 5]`


##  Algorithm Analysis

## Time Complexity

  Best Case: O(n²)
  Average Case: O(n²)
  Worst Case: O(n²)

- The algorithm always compares every pair of elements, regardless of input order.



# Space Complexity

* **O(1)** (Constant space)
* The algorithm sorts the list in place without using extra memory.


##  Experimental Results

The algorithm was tested with lists of different sizes. The number of comparisons grows rapidly as input size increases.

| Input Size (n) | Comparisons (approx) | Observation             |
| -------------- | -------------------- | ----------------------- |
| 1              | 0                    | No sorting needed       |
| 2              | 1                    | Minimal work            |
| 3              | 3                    | Small increase          |
| 4              | 6                    | Quadratic growth begins |
| 5              | 10                   | Increasing comparisons  |
| 10             | 45                   | Noticeable growth       |
| 250            | 31,125               | Slower performance      |
| 999            | 498,501              | Very slow               |
| 9,999          | ~49,985,001          | Extremely slow          |
| 89,786         | ~4 billion+          | Impractical             |
| 789,300        | ~311 billion+        | Not feasible            |
| 1,780,000      | ~1.58 trillion+      | Impossible in practice  |



# Key Observations

* Exchange sort is inefficient for large datasets.
* Performance degrades significantly as input size increases.
* Suitable only for **small datasets or educational purposes**.






