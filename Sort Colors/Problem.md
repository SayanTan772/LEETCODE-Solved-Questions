# Sort Colors

## Problem Statement
Given an array `nums` with `n` objects colored **red, white, or blue**, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order **red, white, and blue**.

We use integers to represent the colors:
- `0` → Red
- `1` → White
- `2` → Blue

You **must** solve this problem **without** using the library's sort function.

---

## Examples

### Example 1:
**Input:**  
`nums = [2,0,2,1,1,0]`  
**Output:**  
`[0,0,1,1,2,2]`  

### Example 2:
**Input:**  
`nums = [2,0,1]`  
**Output:**  
`[0,1,2]`  

---

## Constraints
- `n == nums.length`
- `1 <= n <= 300`
- `nums[i]` is either `0`, `1`, or `2`.
