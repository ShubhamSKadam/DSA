var findGCD = function (arr) {
  let maxm = arr[0];
  let minm = arr[0];

  for (let i = 1; i < arr.length; i++) {
    maxm = Math.max(maxm, arr[i]);
    minm = Math.min(minm, arr[i]);
  }

  if (minm == 0) {
    return maxm;
  }

  // Euclidean method
  while (minm > 0) {
    let remainder = maxm % minm;
    maxm = minm;
    minm = remainder;
  }

  return maxm;
};
