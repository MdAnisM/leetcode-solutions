## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of the strings from left to right to find the common prefix. The comparison continues until the characters are different or the end of one of the strings is reached. The characters before that point form the longest common prefix.

### Complexity

* Time: O(n × m)
* Space: O(1)

### Notes

I learned that the prefix must be common to all the given strings. I also tested the solution with strings having a common prefix and with strings that have no common prefix.
