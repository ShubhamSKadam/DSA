let arr = [1, 2, 3, 4];

function checkDuplicates(arr) {
  if (arr.length < 2) {
    return false;
  }

  const mySet = new Set();

  for (let i = 0; i < arr.length; i++) {
    if (mySet.has(arr[i])) {
      return true;
    } else {
      mySet.add(arr[i]);
    }
  }
  return false;
}

console.log(checkDuplicates(arr));
