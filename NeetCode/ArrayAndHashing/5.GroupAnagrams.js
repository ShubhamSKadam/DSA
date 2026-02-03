/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
  const map = new Map();

  for (const s of strs) {
    const count = new Array(26).fill(0);
    for (const char of s) {
      count[char.charCodeAt(0) - 97]++;
    }

    const key = count.join(",");
    const group = map.get(key) || [];
    group.push(s);
    map.set(key, group);
  }

  const result = [];

  for (const [key, value] of map) {
    result.push(value);
  }

  return result;
};
