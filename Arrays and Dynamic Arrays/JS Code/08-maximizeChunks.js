let arr = [4, 3, 2, 1, 0];

const maxChunksToBeSorted = (arr) => {
  let n = arr.length;

  if (n === 0) return null;

  if (n === 1) return 1;

  let maxChunks = 0;
  let maxValue = -1;
  for (let i = 0; i < n; ++i) {
    if (arr[i] > maxValue) maxValue = arr[i];

    if (maxValue == i) maxChunks++;
  }

  return maxChunks;
};

console.log(maxChunksToBeSorted(arr));
