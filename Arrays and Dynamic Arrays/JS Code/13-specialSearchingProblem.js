let arr = [
  [10, 20, 30, 40],
  [15, 25, 35, 45],
  [27, 29, 37, 48],
  [32, 33, 39, 50],
];

let n = 3,
  m = 3;

let key = 29;

let i = 0,
  j = 3;

while (i < m && j >= 0) {
  if (arr[i][j] == key) {
    console.log("Key Found");
    break;
  } else if (arr[i][j] > key) {
    j--;
  } else {
    i++;
  }
}
