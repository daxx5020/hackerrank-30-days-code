/*
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
*/



function processData(input) {
  let numbers = input.split("\n").slice(1);

  function isPrime(num) {
      if (num <= 1) return false;
      if (num <= 3) return true;
      if (num % 2 === 0 || num % 3 === 0) return false;
      let i = 5;
      while (i * i <= num) {
          if (num % i === 0 || num % (i + 2) === 0) return false;
          i += 6;
      }
      return true;
  }

  numbers.forEach(num => {
      if (isPrime(parseInt(num))) {
          console.log("Prime");
      } else {
          console.log("Not prime");
      }
  });
}