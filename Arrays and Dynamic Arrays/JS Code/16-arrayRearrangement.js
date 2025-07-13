let arr = [1, 3, 0, 2];

for (let i = 0; i < arr.length; i++) {
  if (arr[i] >= 0) {
    let index = arr[i],
      value = i;

    while (index != i) {
      let temp = arr[index];
      arr[index] = -(value + 1);
      value = index;
      index = temp;
    }
    arr[index] = -(value + 1);
  }
}

// reconstruct the final array
for (let i = 0; i < arr.length; i++) {
  arr[i] = -1 * arr[i] - 1;
}

console.log(arr);
