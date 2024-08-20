/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (input) {
  let n = input.length;

  // create a prefixMax Array
  let prefixMax = [];
  prefixMax[0] = input[0];

  for (let i = 1; i < n; i++) {
    prefixMax[i] = Math.max(prefixMax[i - 1], input[i]);
  }

  // create a suffixMax Array
  let suffixMax = [];
  suffixMax[n - 1] = input[n - 1];
  for (let i = n - 2; i >= 0; i--) {
    suffixMax[i] = Math.max(suffixMax[i + 1], input[i]);
  }

  // find the total water trapped
  let waterTrapped = 0;
  for (let i = 1; i < n - 1; i++) {
    let h1 = prefixMax[i - 1];
    let h2 = suffixMax[i + 1];

    if (Math.min(h1, h2) > input[i]) {
      waterTrapped += Math.min(h1, h2) - input[i];
    }
  }
  return waterTrapped;
};
