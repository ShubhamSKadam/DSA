let arr = [2, 2, 1, 1, 1, 2, 2];
arr = [3, 2, 3];

function majorityElement(arr) {
  let majorityElement = -1;
  let maxCount = 0;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] == majorityElement) {
      maxCount++;
    }

    if (arr[i] != majorityElement && maxCount > 0) {
      maxCount--;
    }

    if (maxCount == 0) {
      majorityElement = arr[i];
      maxCount++;
    }
  }
  return majorityElement;
}

console.log(majorityElement(arr));
