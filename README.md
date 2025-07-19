# DSA Practice Repository

This repository contains daily DSA problem solutions from platforms like LeetCode, Codeforces, and more.

## Structure

Problems are organized by topic:
- Arrays
- Strings
- Linked List
- Stack & Queue
- Trees
- Graphs
- Dynamic Programming
- Bit Manipulation
- Miscellaneous

Each file includes a link to the original problem and a brief explanation of the approach.

## Example

```js
// https://leetcode.com/problems/two-sum/
// Approach: Hashmap for O(n) lookup

function twoSum(nums, target) {
  const map = new Map();
  for (let i = 0; i < nums.length; i++) {
    const diff = target - nums[i];
    if (map.has(diff)) return [map.get(diff), i];
    map.set(nums[i], i);
  }
}
```
