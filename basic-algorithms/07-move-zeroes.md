## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a two-pointer approach to move all zero values to the end of the array while maintaining the relative order of the non-zero elements. One position keeps track of where the next non-zero element should be placed, and the array is updated while traversing it.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

I learned that the order of the non-zero elements must remain unchanged. I also tested the solution with arrays containing zeroes at the beginning, middle, and end.
