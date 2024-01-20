const input = [2,1,0,3,5,4];

// copy the entire input array in prefixMax array
const prefixMax = [...input];

prefixMax[0] = input[0];
for(let i=1;i<input.length;i++){
  prefixMax[i] = Math.max(input[i], prefixMax[i-1]);
}

// copy the entire input array in suffixMax array
const suffixMax = [...input];

suffixMax[input.length-1] = input[input.length-1];
for(let i=input.length-2 ; i>=0 ;i--){
  suffixMax[i] = Math.max(input[i],suffixMax[i+1]);
}

console.log(prefixMax); // [ 2, 2, 2, 3, 5, 5 ]
console.log(suffixMax); // [ 5, 5, 5, 5, 5, 4 ]

// Now you can find any maximum element at any kth index from the start. 

// Time Complexity : O(n);