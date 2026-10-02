## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to check whether the brackets are correctly opened and closed. When an opening bracket is found, it is stored in the stack. When a closing bracket is found, it is compared with the most recent opening bracket to check whether they form a valid pair.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

I learned that brackets must close in the correct order. I tested the solution with valid combinations such as matching pairs and invalid combinations with incorrect ordering or unmatched brackets.
