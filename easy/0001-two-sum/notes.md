# 1. Two Sum

## Problem link

<https://leetcode.com/problems/two-sum/>

## Key idea

For each number, check if its complement (target - x) has already been seen, using a hash map.

## Approaches tried

| Approach | Time | Space | File |
|----------|------|-------|------|
| Brute force (nested loops over all pairs) | O(n^2) | O(1) | `brute_force.cpp` |
| One-pass hash map (number -> index) | O(n) | O(n) | `hashmap.cpp` |

## Mistakes I made

- Wrong loop condition (`>` instead of `<`).
- Started `j` at 0 instead of `i + 1`, so the same element got used twice.
- Returned the sum instead of the indices.
- Used Python-style `[i, j]` instead of C++ `{i, j}`.
- Forgot a `return` after the loops.

## Revisit notes

- Not revisited yet.
