//use of forEach;

let sampleArray = [10, 20, 30, 40, 50];
//req. console each element alongwith index

sampleArray.forEach((item, index) => {
  console.log(index, " => ", item);
});

//output:
// 0  =>  10
// 1  =>  20
// 2  =>  30
// 3  =>  40
// 4  =>  50
