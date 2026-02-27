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

// miniCoineCharge

function miniCoineCharge(coins, sum) {
  if (sum === 0) return 0;
  let result = Infinity;
  for (let i = 0; i < coins.length; i++) {
    if (sum - coins[i] < 0) continue;
    result = Math.min(result, miniCoineCharge(coins, sum - coins[i]));
  }
  return 1 + result;
}

console.log(miniCoineCharge([1, 5, 7], 11));
