let arr = [
  [1,2,3],
  [4,5,6],
  [7,8,9],
  ]
let n = 3;
let m = 3;
 
let i1=1,j1=1,i2=2,j2=2;
// find the prefix sum row wise
for(let i=0;i<n;i++){
  for(let j=1;j<m;j++){
    arr[i][j] += arr[i][j-1];  
  }
}
console.log("prefix sum row wise",arr);
// find the prefix sum col wise
for(let j=0;j<m;j++){
  for(let i=1;i<n;i++){
    arr[i][j]+= arr[i-1][j];
  }
}
 
console.log("prefix sum col wise", arr)
 
let totalAns = arr[i2][j2];
 
// check if the array has space in the left
if(j1 > 0){
  totalAns-=arr[i2][j1-1];
}
 
if(i1 > 0){
  totalAns-=arr[i1-1][j2];
}
 
if(i1 > 0 && j1 > 0){
  totalAns+=arr[i1-1][j1-1];
}
 
console.log(totalAns);
