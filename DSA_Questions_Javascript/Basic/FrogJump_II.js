function frog2(i, n, k, heights) {
  if (i === n) return 0;
  let result = Infinity;
  for (let j = 1; j <= k; j++) {
    if (i + j <= n) {
      // imp case
      let cost =
        Math.abs(heights[i + j] - heights[i]) + frog2(i + j, n, k, heights);

      result = Math.min(cost, result);
    }
  }
  return result;
}

console.log(frog2(0, 4, 3, [10, 30, 40, 50, 20]));
