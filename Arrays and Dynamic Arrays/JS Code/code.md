# Arrays and Dynamic Arrays

### Precomputation

```js
const inputArr = [1, 2, 3, 4, 5, 6];

for (let i = 1; i < inputArr.length; i++) {
  inputArr[i] += inputArr[i - 1]
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
// backwards.
```

### Prefix Max and Suffix Max

```js
const inputArr = [1, 2, 3, 4, 5, 6];

for (let i = 1; i < inputArr.length; i++) {
  inputArr[i] += inputArr[i - 1]
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
// backwards.
```

### Maximize Expression 

```js
// The goal is to maximize this expression p*arr[i] + q*arr[j] + r*arr[k]
// such that i<j<k considering p,q,r are all positive integers.

const input = [2, 1, 4, 8, 5, 3];

let p = 2,
  q = 4,
  r = 5;

let ans = Number.MIN_SAFE_INTEGER;
for (let i = 0; i < input.length; i++) {
  for (let j = i + 1; j < input.length; j++) {
    for (let k = j + 1; k < input.length; k++) {
      let x = p * input[i] + q * input[j] + r * input[k];
      ans = Math.max(ans, x);
    }
  }
}

console.log(ans); // 65

// Time Complexity : O(n^3)
---------------------------
// The above problem can be solved much more optimally, but let's break it down 
// into a sub problem.

// The goal is to maximize the expression a[i]+a[j]+a[k]
// such that i<j<k

const inputArr = [2, 5, 3, 1, 4, 9];

const prefixMax = [...inputArr];
const sufixMax = [...inputArr];

// find prefixMax
prefixMax[0] = inputArr[0];
for (let i = 1; i < inputArr.length; i++) {
  prefixMax[i] = Math.max(prefixMax[i - 1], inputArr[i]);
}

// find sufixMax
sufixMax[inputArr.length - 1] = inputArr[inputArr.length - 1];
for (let i = inputArr.length - 2; i >= 0; i--) {
  sufixMax[i] = Math.max(sufixMax[i + 1], inputArr[i]);
}

// find the triplet 
let maxAns = -100;
for (let i = 1; i < inputArr.length - 1; i++) {
  console.log("iteration", i)
  console.log(prefixMax[i - 1], inputArr[i], sufixMax[i + 1]);
  maxAns = Math.max(maxAns, prefixMax[i - 1] + inputArr[i] + sufixMax[i + 1]);
}

console.log(maxAns);
// Total Time Complexity = O(n)
---------------------------
// The goal is to maximize the expression , p * arr[i]+ q*arr[j]+ r*arr[k]
// such that i < j < k and p,q,r > 0;

const input = [9, 1, 4, 2, 5, -2];

let p = 1,
	q = 2,
	r = 4;

// precompute prefixMax
const prefixMax = [...input];
prefixMax[0] = prefixMax[0] * p;
for (let i = 1; i < prefixMax.length; i++) {
	prefixMax[i] = Math.max(prefixMax[i] * p, prefixMax[i - 1]);
}

// precomput suffixMax
const suffixMax = [...input]
suffixMax[suffixMax.length - 1] = suffixMax[suffixMax.length - 1] * r;
for (let i = suffixMax.length - 2; i >= 0; i--) {
	suffixMax[i] = Math.max(suffixMax[i] * r, suffixMax[i + 1]);
}

// compute the expression
let ans = Number.MIN_SAFE_INTEGER;
for (let i = 1; i <= input.length - 2; i++) {
	let x = prefixMax[i - 1] + input[i] * q + suffixMax[i + 1];
	ans = Math.max(ans, x);
}

console.log(ans); // 37

// Time Complexity : O(n)
```

