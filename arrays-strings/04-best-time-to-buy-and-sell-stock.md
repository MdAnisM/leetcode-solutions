## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach to find the maximum profit. I keep track of the minimum stock price seen so far and calculate the profit that can be obtained by selling at each price. The maximum profit found during the traversal is returned as the answer.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

I learned that the stock must be bought before it is sold. I also tested the solution with increasing prices, decreasing prices, and a single-element case.
