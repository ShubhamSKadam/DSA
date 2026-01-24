let arr = [1, 2, 1];
let n = 3;

let ans = new Array(2 * n);

for (let i = 0; i < n; i++) {
  ans[i] = arr[i];
}

let j = 0;
for (let i = n; i < 2 * n; i++) {
  ans[i] = arr[j];
  j++;
}

console.log(ans);
