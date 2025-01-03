// Problem statement : Print the sum of all the subarrays with 
// size k
let arr = [1,2,-1,0,4];

let sum = 0;

let k = 3;

// find the sum of first k elements 
for(let i=0;i<k;i++){
	sum+=arr[i];
}

// Start the iteration from k+1 all the way to n
for(let j=k;j<arr.length;j++){
	console.log("SUM: ",sum);
	sum+=arr[j];
	sum-=arr[j-k];
}

console.log("SUM: ",sum);

