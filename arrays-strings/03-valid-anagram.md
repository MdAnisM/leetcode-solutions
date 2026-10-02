## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I compared the characters of the two strings to determine whether they contain the same characters with the same frequencies. If all character frequencies match, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I learned that the order of characters does not matter for an anagram, but the frequency of each character must be the same. I tested the solution with both matching and non-matching strings.