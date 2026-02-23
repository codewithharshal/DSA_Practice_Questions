/*
// Map
let x = [1, 2, 3, 4, 5];
let m = x.map((x, i) => {
  return `${i + 1}: ${x * 2}`;
});
console.log(m);

*/

/*
// custom mapper
function mapp(arr, callback) {
  let Aarr = [];
  for (let i = 0; i < arr.length; i++) {
    const newValue = callback(arr[i], i, arr);
    Aarr.push(newValue);
  }
  return Aarr;
}

let x = [1, 2, 3, 4, 5];

let a = mapp(x, (value) => {
  return value * 2;
});

console.log(a); // [2,4,6,8,10]

*/

/*
// filter
let x = [1, 2, 3, 4, 5, 6, 7];
let b = x.filter((i, idx) => {
  return i % 2 == 0;
});
console.log(b);
console.log(x);
*/

/*
// custom filter
function myFilter(arr, callback) {
  let result = [];

  for (let i = 0; i < arr.length; i++) {
    if (callback(arr[i], i, arr)) {
      result.push(arr[i]);
    }
  }

  return result;
}

let x = [1, 2, 3, 4, 5];

let filtered = myFilter(x, (v) => v > 3);

console.log(filtered); // [4,5]
*/

/*
// reducer

let x = [1, 2, 3, 4, 5];

let sum = x.reduce((acc, val) => acc + val, 0);

console.log(sum); // 15
*/

/*

// custom reducer
function myReduce(arr, callback, initial) {
  let acc = initial;

  for (let i = 0; i < arr.length; i++) {
    acc = callback(acc, arr[i], i, arr);
  }

  return acc;
}

let x = [1, 2, 3, 4];

let result = myReduce(x, (acc, v) => acc + v, 0);

console.log(result); // 10

*/
