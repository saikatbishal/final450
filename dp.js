const fib = (n, memo = {}) => {
    if (n in memo) return memo[n];
    if (n <= 2) return 1;
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}
const fibo = (n) => {
    for (let index = 1; index <= n; index++) {
        console.log(index + " = " + fib(index));
    }
}

const gridTravel = (m, n, memo={}) => {
    const key = m + ',' + n;
    const key2 = m + ',' + n;
    if (key in memo) return memo[key];
    if (key2 in memo) return memo[key2];
    if (n === 1 && m === 1) return 1;
    if (m === 0 || n === 0) return 0;
    memo[key] = gridTravel(m - 1, n,memo) + gridTravel(m, n - 1,memo);
    return memo[key];
}
const canSum = (targetSum, numbers, memo = {}) => {
    
    if (targetSum in memo) return memo[targetSum];
    if (targetSum === 0) return true;
    if (targetSum < 0)
        return false;
    for (let num of numbers) {
        
        const remainder = targetSum - num;
        if (canSum(remainder, numbers, memo) === true) {
            memo[targetSum] = true;
            return true;
        }
    }
    memo[targetSum] = false;
    return false;
};

console.log(canSum(7,[2,3]));
console.log(canSum(7,[5,3,4,7]));
console.log(canSum(7,[2,4]));
console.log(canSum(8,[2,3,5]));
console.log(canSum(300,[7,14]));