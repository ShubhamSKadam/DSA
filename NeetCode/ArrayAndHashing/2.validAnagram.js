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

let ans = checkAnagram(s, t);
console.log(ans);
