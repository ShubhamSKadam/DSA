// Problem number 303

class NumArray {
  constructor(arr) {
    this.arr = arr;
    // find the prefix sum of arr
    for (let i = 1; i < this.arr.length; i++) {
      this.arr[i] += this.arr[i - 1];
    }
  }

  sumRange(left, right) {
    return this.arr[right] - this.arr[left - 1];
  }
}

let arr = new NumArray([1, 2, 3, 4, 5]);

console.log(arr.sumRange(1, 2));
