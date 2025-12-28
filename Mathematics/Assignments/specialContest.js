let n = 6;
let a = 2;
let b = 3;
let k = 3;

function GCD(a, b) {
  let maxm = Math.max(a, b);
  let minm = Math.min(a, b);

  while (maxm % minm != 0) {
    let temp = maxm;
    maxm = minm;
    minm = temp % minm;
  }

  return minm;
}

let gcd = GCD(a, b);
console.log("gcd", gcd);

let lcm = Math.floor((a * b) / gcd);
console.log("lcm", lcm);

let result = Math.floor(n / a + n / b - n / lcm);

console.log("result:", result);
