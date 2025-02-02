let arr = [2, 1, 5, 3, 6];

let n = arr.length;
let k = 3;

const minSwaps = () => {
  const countOfLegalElements = () => {
    let count = 0;
    for (let i = 0; i < n; i++) {
      if (arr[i] <= k) count++;
    }
    return count;
  };

  let maxCountGroup = 0;
  let legalElements = countOfLegalElements();
  for (let i = 0; i < legalElements; i++) {
    if (arr[i] <= k) {
      maxCountGroup++;
    }
  }

  let tempMax = maxCountGroup;
  for (let j = legalElements; j < n; j++) {
    if (arr[j - legalElements] <= k) {
      tempMax--; // Remove first element of previous window
    }

    if (arr[j] <= k) {
      tempMax++; // Add new element of current window
    }

    maxCountGroup = Math.max(tempMax, maxCountGroup);
  }

  return legalElements - maxCountGroup;
};

console.log(minSwaps());
