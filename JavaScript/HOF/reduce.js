//use of reduce function;

let sampleArray = [1, 2, 3, 4, 5];
//req. calculate sum of each element

let sum = sampleArray.reduce((prev, curr) => {
  return (curr += prev);
}, 0);

console.log("Sum", sum);
//output: Sum 15
