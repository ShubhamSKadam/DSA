let arr = [4, 3, 2, 7, 8, 2, 3, 1];

let n = arr.length;
// decrement all numbers by 1 ( for 0 indexing )

for (let i = 0; i < n; i++) {
  arr[i] = arr[i] - 1;
}

// move them into their right places
for (let i = 0; i < n; i++) {
  let new_val = arr[i] % n;
  let old_val = arr[new_val] % n;
  arr[new_val] = n * new_val + old_val;
}

for (let i = 0; i < arr.length; i++) {
  arr[i] = Math.floor(arr[i] / n);
  arr[i] = arr[i] + 1;
}
// increment the array and divide by n

let counter = 1;
let missingNums = [];
for (let i = 0; i < n; i++) {
  if (counter != arr[i]) {
    missingNums.push(counter);
  }
  counter++;
}

console.log(missingNums);
