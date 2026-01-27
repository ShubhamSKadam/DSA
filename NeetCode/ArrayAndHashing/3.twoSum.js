const arr = [3, 2, 3];

const target = 6;

function twoSum(arr, target) {
  const numMap = new Map();

  for (let i = 0; i < arr.length; i++) {
    let diff = target - arr[i];

    console.log(diff);
    console.log(numMap.has(diff));

    if (numMap.has(arr[i])) {
      return [numMap.get(arr[i]), i];
    }
    numMap.set(diff, i);
  }

  console.log(numMap);
  return [];
}

let result = twoSum(arr, target);
console.log(result);
