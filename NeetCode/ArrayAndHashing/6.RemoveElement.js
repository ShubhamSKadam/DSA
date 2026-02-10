let arr = [3, 2, 2, 3];

function RemoveElement(arr, val) {
  let count = 0;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] == val) {
      count++;
    }
  }

  let i = 0;
  let j = arr.length - 1;

  while (i < arr.length && i < j) {
    if (arr[i] == val) {
      while (arr[j] == val && i < j) {
        j--;
      }

      let temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    i++;
  }

  return arr.length - count;
}

console.log(RemoveElement(arr, 3));

function RemoveElementCleaner(arr, val) {
  let k = 0;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] != val) {
      arr[k] = arr[i];
      k++;
    }
  }
  return k;
}
