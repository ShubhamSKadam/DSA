// The goal is to maximize this expression p*arr[i] + q*arr[j] + r*arr[k]
// such that i<j<k considering p,q,r are all positive integers.

const input = [2,1,4,8,5,3];

let p = 2,q=4,r=5;

let ans = Number.MIN_SAFE_INTEGER;
for(let i=0;i<input.length;i++){
  for(let j=i+1; j<input.length;j++){
    for(let k=j+1;k<input.length;k++){
      let x = p*input[i]+q*input[j]+r*input[k];
      ans = Math.max(ans,x);
    }
  }
}

console.log(ans); // 65


// Time Complexity : O(n^3)
