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