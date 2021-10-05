//use of map function;

let sampleArray = [1, 2, 3, 4, 5];
//req. increment each value in array by 10;

let modifiedArray = sampleArray.map((item, index) => {
  return item + 10;
});

console.log("ModifiedArray", modifiedArray);
//output: ModifiedArray [ 11, 12, 13, 14, 15 ]
