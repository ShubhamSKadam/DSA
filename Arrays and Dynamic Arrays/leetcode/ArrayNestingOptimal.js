let arr = [5, 4, 0, 3, 1, 6, 2];
// let arr = [4, 1, 5, 3, 0, 2];

let maxCount = 0;

for (let i = 0; i < arr.length; i++) {
  if (arr[i] != -1) {
    let start = i;
    let count = 0;

    while (arr[start] != -1) {
      let temp = arr[start]; // save next
      arr[start] = -1; // mark visited
      start = temp; // jump
      count++;
    }
    if (count > maxCount) maxCount = count;
  }
}

console.log(maxCount);
