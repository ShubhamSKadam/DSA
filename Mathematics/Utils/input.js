const fs = require("fs");

const data = fs.readFileSync(0, "utf8").trim();
const tokens = data.length ? data.split(/\s+/) : [];
let idx = 0;

function next() {
  return tokens[idx++];
}

function nextInt() {
  return Number(next());
}

function nextLine() {
  // rarely needed in DSA, but useful sometimes
  return tokens[idx++];
}

module.exports = {
  next,
  nextInt,
  nextLine,
};
