let s1 = "ab";
let s2 = "eidbaooo";

const checkPermutation = (s1, s2) => {
  const freqS1 = {};
  const freqS2 = {};

  for (let i = 0; i < s1.length; i++) {
    freqS1[s1[i]] = (freqS1[s1[i]] || 0) + 1;
  }

  for (let i = 0; i < s2.length; i++) {
    freqS2[s2[i]] = (freqS2[s2[i]] || 0) + 1;
  }

  return freqS1 === freqS2; // This won't work since objects are compared by reference and not by contents
};

// find if s2 consists of permutation of s1

let result = false;
for (let i = s1.length; i <= s2.length; i++) {
  let tempStr = s2.substring(i - s1.length, i);
  result = checkPermutation(s1, tempStr);
  if (result) {
    console.log("True");
    break;
  }
}

if (!result) {
  console.log("False");
}
