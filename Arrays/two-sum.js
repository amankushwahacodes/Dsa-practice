// https://leetcode.com/problems/two-sum/
// Solved on: July 18, 2025
// Approach: Hashmap for O(n) lookup

function twoSum(nums, target) {
  const map = new Map();
  for (let i = 0; i < nums.length; i++) {
    const diff = target - nums[i];
    if (map.has(diff)) return [map.get(diff), i];
    map.set(nums[i], i);
  }
}
