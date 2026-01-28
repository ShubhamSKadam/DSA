var longestCommonPrefix = function (strs) {
  strs.sort();

  let stringOne = strs[0];
  let stringTwo = strs[strs.length - 1];

  let n = Math.min(stringOne.length, stringTwo.length);

  let result = "";
  for (let i = 0; i < n; i++) {
    if (stringOne[i] == stringTwo[i]) {
      result += stringOne[i];
    } else {
      break;
    }
  }
  return result;
};
