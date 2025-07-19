// https://leetcode.com/problems/valid-anagram/
// Solved on: July 18, 2025
// Approach: Frequency map comparison

function isAnagram(s, t) {
  if (s.length !== t.length) return false;
  const count = {};
  for (let char of s) count[char] = (count[char] || 0) + 1;
  for (let char of t) {
    if (!count[char]) return false;
    count[char]--;
  }
  return true;
}
