function frogjumpMinCost(i, n, hights) {
  if (i === n) return 0;
  if (i == n - 1) {
    return hights[i] - hights[i + 1] + frogjumpMinCost(i + 1, n, hights);
  }
  if (i > n) return Infinity;
  let l =
    Math.abs(hights[i] - hights[i + 1]) + frogjumpMinCost(i + 1, n, hights);
  let r =
    Math.abs(hights[i] - hights[i + 2]) + frogjumpMinCost(i + 2, n, hights);
  return Math.min(l, r);
}

console.log(frogjumpMinCost(1, 6, [undefined, 30, 10, 60, 10, 60, 50]));
