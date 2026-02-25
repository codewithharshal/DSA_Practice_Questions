// Print 1 natural number

/*
function pnum(n) {
  if (n <= 0) return;
  pnum(n - 1);
  console.log(n);
}
pnum(5);
*/

// function bs(n) {
//   if (n == 1) return 2;
//   else if (n == 2) return 3;
//   return bs(n - 1) + bs(n - 2);
// }
// console.log(bs(5));

// frog jump
// function frogjumpMinCost(i, n, hights) {
//   if (i === n) return 0;
//   if (i == n - 1) {
//     return hights[i] - hights[i + 1] + frogjumpMinCost(i + 1, n, hights);
//   }
//   if (i > n) return Infinity;
//   let l =
//     Math.abs(hights[i] - hights[i + 1]) + frogjumpMinCost(i + 1, n, hights);
//   let r =
//     Math.abs(hights[i] - hights[i + 2]) + frogjumpMinCost(i + 2, n, hights);
//   return Math.min(l, r);
// }

// console.log(frogjumpMinCost(1, 6, [undefined, 30, 10, 60, 10, 60, 50]));

// Frog 2

// function frog2(i, n, k, heights) {
//   if (i === n) return 0;
//   let result = Infinity;
//   for (let j = 1; j <= k; j++) {
//     if (i + j <= n) {
//       // imp case
//       let cost =
//         Math.abs(heights[i + j] - heights[i]) + frog2(i + j, n, k, heights);

//       result = Math.min(cost, result);
//     }
//   }
//   return result;
// }

// console.log(frog2(0, 4, 3, [10, 30, 40, 50, 20]));

// Maze path

// function mazePath(sr, sc, er, ec) {
//   if (sr >= er || sc >= ec) return 0;
//   if (sr == er - 1 && sc == ec - 1) return 1;

//   return mazePath(sr, sc + 1, er, ec) + mazePath(sr + 1, sc, er, ec);
// }

// console.log(mazePath(0, 0, 3, 3));

// Reduce to 1

// function steps(n) {
//   if (n === 1) return 0;
//   else if (n % 2 === 0) n = n / 2;
//   else if (n % 3 === 0) n = n / 3;
//   else n = n - 1;
//   return 1 + steps(n);
// }

// console.log(steps(10));
