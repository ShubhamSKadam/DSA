const s = "anagram";
const t = "nagaram";

function checkAnagram(s, t) {
  let result = {};

  if (s.length != t.length) {
    return false;
  }

  for (let i = 0; i < s.length; i++) {
    if (result[s[i]]) {
      result[s[i]]++;
    } else {
      result[s[i]] = 1;
    }
  }

  for (let i = 0; i < t.length; i++) {
    if (result[t[i]] && result[t[i]] > 0) {
      result[t[i]]--;
    } else {
      return false;
    }
  }
  return true;
}

// let ans = checkAnagram(s, t);
// console.log(ans);

// A similar approach like the above, but slightly mathy
function checkAnagramTwo(s, t) {
  const counts = new Array(26).fill(0);

  for (let char of s) {
    counts[char.charCodeAt(0) - 97]++;
  }

  for (let char of t) {
    counts[char.charCodeAt(0) - 97]--;
  }

  // iteate over counts
  for (let i = 0; i < counts.length; i++) {
    if (counts[i] != 0) {
      return false;
    }
  }
  return true;
}
