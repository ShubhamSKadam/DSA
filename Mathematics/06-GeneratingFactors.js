const { nextInt } = require("./Utils/input");

// P1. Given an Int N, print all it's factors

const n = nextInt();

const printFactors = (n) => {
  // factors of N are symmetric about Sqrt(N);
  for (let i = 1; i <= Math.sqrt(n); i++) {
    if (n % i == 0) {
      if (i * i == n) {
        console.log(i, " ");
      } else {
        console.log(i, " ", n / i, " ");
      }
    }
  }
};

// printFactors(n);

// P2. Given an Int N, print true if the count of factors of N is odd, false if even.

const findCount = (n) => {
  const ans = Math.floor(Math.sqrt(n));

  if (ans * ans == n) {
    console.log("false");
  } else {
    console.log("true");
  }
};

findCount(n);
