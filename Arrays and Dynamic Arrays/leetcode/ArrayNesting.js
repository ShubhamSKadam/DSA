// let arr = [0, 1, 2];
let arr = [4, 1, 5, 3, 0, 2];

let n = arr.length;
let maxLength = 0;
for (let i = 0; i < n; i++) {
  let k = arr[i];
  let length = 0;
  let value = arr[k];
  while (k != value) {
    length++;
    value = arr[value];
  }
  if (maxLength < length) {
    maxLength = length;
  }
}

console.log("Max Length: ", maxLength + 1);
