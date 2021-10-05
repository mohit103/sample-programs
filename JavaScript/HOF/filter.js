//use of filter function;

let sampleArray = [1, 2, 3, 4, 5];
//req. return all items that are even

let modifiedArray = sampleArray.filter((item, index) => {
  return item % 2 === 0;
});

console.log("ModifiedArray", modifiedArray);
//output: ModifiedArray [ 2, 4 ]
