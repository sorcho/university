"use strict";

let collatzConjecture = (n, steps = 0) => {
    if (n % 2 == 0) {
        n /= 2;
    } else {
        n = (n*3)+1
    }

    steps++;

    if (n == 1) {
        return steps;
    } else {
        return collatzConjecture(n, steps)
    }
}

for (let i = 2; i <= 10000; i++) {
    let steps = collatzConjecture(i);

    console.log(`Collatz proved for n=${i}: sequence converges to 1 in ${steps} steps`);
}

