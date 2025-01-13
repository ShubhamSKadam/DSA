const inputArr = [1, 2, 3, 4, 5, 6];

for (let i = 1; i < inputArr.length; i++) {
  inputArr[i] += inputArr[i - 1];
}

// let's say I want to find the sum from a starting index 'l' and ending index
// 'r', then we can find it using inputArr[r]-inputArr[l-1].

let l = 1,
  r = 4;
console.log(inputArr[r] - inputArr[l - 1]); // 14

// You have precomputed the array and now you can do any number of
// queries in just O(1) time.

// Total TC : O(n)

// Remember we can also do a suffix sum by just iterating the array
// backwards
