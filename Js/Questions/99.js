/*

Write a function to take a positive integer and a prime number as an input and return true if the prime factors of the given positive integer are less than or equal the given prime number

Example :

hasLessPrimeFactor(20,5) should return true because Prime Factors of a Number: 20 = 2 X 2 X 5

*/
function primeFactors(n) {
    let factors = []; // Array to store the prime factors
  
    for (let divisor = 2; n >= 2; divisor++) {
      while (n % divisor === 0) {
        factors.push(divisor); // Found a prime factor, add it to the array
        n = n / divisor; // Reduce the number by dividing it with the prime factor
      }
    }
  
    return factors; // Return the array of prime factors
  }
  


function hasLessPrimeFactor(number,primenum) {
    
    let primeFactors = [];

    for(let divisor = 2; number >= 2; divisor++)
    {
        while(number % divisor === 0)
        {
            primeFactors.push(divisor);

            number = number / divisor;
        }
    }

    console.log(primeFactors);

    for(let i = 0; i < primeFactors.length; i++)
    {
        if(primeFactors[i] > primenum)
        {
            return false;
        }
        return true;
    }
}
  
  
console.log(hasLessPrimeFactor(20,7));
  




function hasLessPrimeFactor(number,primenum) {
    
    if(number % primenum === 0)
    {
        return true;
    }

    return false;
}



