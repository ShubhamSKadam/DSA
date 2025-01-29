const arr = [
    [1,2,3],
    [4,5,6]
];

let i1=0,j1=1,i2=1,j2=2;

let sum = 0;
for(let i=i1;i<=i2;i++){
    for(let j=j1;j<=j2;j++){
        sum+=arr[i][j];
    }
}

console.log(sum);
