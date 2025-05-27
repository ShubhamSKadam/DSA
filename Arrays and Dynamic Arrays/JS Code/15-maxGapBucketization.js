let n = 4;
let arr = [3, 6, 9, 1];

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
