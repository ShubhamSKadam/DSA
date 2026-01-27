const str = ["flower", "flow", "flight"];

let currentCommon = str[0];
let result = "";
let i = 1;
while (i < str.length) {
  // strip down the common among the current and next string
  let currentString = str[i];
  for (let j = 0; j < str[i].length; j++) {
    if (currentCommon[j] == currentString[j]) {
      result += currentString[j];
    } else {
      break;
    }
  }
  currentCommon = result;
  result = "";
  i++;
}

console.log(currentCommon);
