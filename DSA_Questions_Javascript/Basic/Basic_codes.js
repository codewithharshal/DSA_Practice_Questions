/*
// Odd even
let x = 4;
if (x % 2 == 0) {
  console.log("even");
} else {
  console.log("odd");
}
*/

/*
// minimum of three
let a = 0,
  b = 1,
  c = 8;

if (a < b && a < c) {
  console.log(a);
} else if (b < a && b < c) {
  console.log(b);
} else {
  console.log(c);
}

*/

/*
// is a valid traingle
let a = 1,
  b = 10,
  c = 12;

if (a + b > c && a + c > b && b + c > a) {
  console.log("is a valid triangle");
} else {
  console.log("is not a valid triangle");
}
*/

/*
// Scalene, Equilatral, isoceles
let a = 7,
  b = 5,
  c = 4;

if (a == b && b == c && c == a) {
  console.log("it is a Equilatral");
} else if (a == b || b == c || c == a) {
  console.log("it is a isoceles");
} else {
  console.log("it is a Scalene");
}
*/

/*
//sum of n number
let n = 10;
let sum = 0;

for (let i = 0; i <= n; i++) {
  sum += i;
}

console.log(sum);
*/

/*
// reverse while loop
let i = 10;
while (i != 0) {
  console.log(i);
  i--;
}
*/

/*
// is prime
let n = 11;
let b = true;
for (let i = 2; i < n; i++) {
  if (n % i == 0) {
    b = false;
    break;
  }
}
if (b) {
  console.log("prime");
} else {
  console.log("Non Prime");
}

*/

/*
// GCD
let a = 6;
let b = 12;

while (b) {
  var t = b;
  b = a % b;
  a = t;
}
console.log(a);
*/

/*
// GCD 
function gcd(a, b) {
  if (b === 0) {
    return a;
  }
  return gcd(b, a % b);
}

// Example usage:
console.log(gcd(12, 18)); // Output: 6
console.log(gcd(2154, 458)); // Output: 2

*/

/*
// Sum of digit
let a = 12345;
let sum = 0;
while (a) {
  let x = a % 10;
  sum += x;
  a = Math.floor(a / 10);
}
console.log(sum);
*/

/*
// Fibonnaci
let n = 10;

let a = 0,
  b = 1;
console.log(a);
console.log(b);

for (let i = 2; i <= n; i++) {
  let x = a + b;
  a = b;
  b = x;
  console.log(x);
}
*/

// arrays

/*
// DNF
let arr = [1, 2, 1, 1, 2, 1, 0, 0, 2, 0, 0, 0];
let low = 0;
let mid = 0;
let high = arr.length - 1;

while (mid <= high) {
  if (arr[mid] == 0) {
    let x = arr[low];
    arr[low] = arr[mid];
    arr[mid] = x;
    low++;
    mid++;
  } else if (arr[mid] == 1) {
    mid++;
  } else {
    let x = arr[mid];
    arr[mid] = arr[high];
    arr[high] = x;
    high--;
  }
}
console.log(arr);
*/

// for of loop
/*
let arr = [1, 2, 3, 4, 5, 6, 7];
for (let i of arr) {
  console.log(i);
}
*/

// Objects

/*
const person = {
  name: "harshal",
  age: 21,
};

console.log(person.name);
console.log(person["name"]);

person.name = "Aman";
person["age"] = 21;

console.log(person);

delete person.age;

console.log(person);
*/

/*
// Count frequency
let arr = [1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 3, 2, 1, 5, 6, 7, 9, 7, 6];
const obj = {};
for (let i = 0; i < arr.length; i++) {
  if (obj[arr[i]]) {
    obj[arr[i]] += 1;
  } else {
    obj[arr[i]] = 1;
  }
}
console.log(obj);
*/
