const { nextInt } = require("./Utils/input");

const n = 5;

let doors = new Array(n + 1).fill(0);

doors[1] = 1;

const countDoors = (doors, n) => {
  for (let i = 2; i <= n; i++) {
    let res = Math.floor(Math.sqrt(i));
    if (res * res == i) {
      doors[i] = 1;
    } else {
      doors[i] = 0;
    }
  }
  let count = 0;
  for (let i = 1; i <= n; i++) {
    if (doors[i] == 1) count++;
  }

  return count;
};

console.log(countDoors(doors, n));
