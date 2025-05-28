/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumGap = function (arr) {
  let n = arr.length;

  let maxValue = Math.max(...arr);
  let minValue = Math.min(...arr);

  let gap = Math.ceil((maxValue - minValue) / (n - 1));

  // Creating n buckets each will range from local minimal to local maxima of min to min + gap-1

  let buckets = new Array(n);

  let bucket = {
    min: minValue,
    max: minValue + gap - 1,
  };

  for (let i = 0; i < n; i++) {
    let index = Math.floor((arr[i] - minValue) / gap);
    console.log(index);
    if (!buckets[index]) {
      let temp = {
        min: arr[i],
        max: arr[i],
      };
      buckets[index] = temp;
    } else {
      if (arr[i] > buckets[index].max) buckets[index].max = arr[i];
      if (arr[i] < buckets[index].min) buckets[index].min = arr[i];
    }
  }

  let maxGap = 0;
  let prevMax = null;

  for (let i = 0; i < buckets.length; i++) {
    if (!buckets[i]) continue;

    if (prevMax !== null) {
      maxGap = Math.max(maxGap, buckets[i].min - prevMax);
    }

    prevMax = buckets[i].max;
  }
  return maxGap;
};
