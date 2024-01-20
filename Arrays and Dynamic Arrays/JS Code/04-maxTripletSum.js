// The goal is to maximize the expression a[i]+a[j]+a[k]
// such that i<j<k

const inputArr = [2,5,3,1,4,9]; 

const prefixMax = [...inputArr];
const sufixMax = [...inputArr];

// find prefixMax
prefixMax[0]=inputArr[0];
for(let i=1;i< inputArr.length;i++){
  prefixMax[i] = Math.max(prefixMax[i-1],inputArr[i]);
}

// find sufixMax
sufixMax[inputArr.length-1] = inputArr[inputArr.length-1];
for(let i= inputArr.length-2;i>=0;i--){
  sufixMax[i] = Math.max(sufixMax[i+1], inputArr[i]);
}

// find the triplet 
let maxAns = -100;
for(let i=1;i< inputArr.length-1;i++){
  console.log("iteration",i)
  console.log(prefixMax[i-1], inputArr[i],sufixMax[i+1]);
  maxAns = Math.max(maxAns, prefixMax[i-1]+inputArr[i]+sufixMax[i+1]);
}

console.log(maxAns);
// Total Time Complexity = O(n)