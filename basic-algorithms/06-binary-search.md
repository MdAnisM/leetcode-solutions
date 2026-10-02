## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique to find the target element in a sorted array. I maintain two positions, left and right, and calculate the middle position. Depending on the comparison between the middle element and the target, I reduce the search range until the target is found or the range becomes empty.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

I learned that binary search works only when the array is sorted. I also tested the solution when the target is present, when the target is absent, and when the array contains only one element.
