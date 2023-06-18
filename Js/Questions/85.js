/*

There are positive number which has no prime factor larger than 5

So the first few numbers are 1, 2, 3, 4, 5, 6, 8, 9, 10

Write a function which takes a positive number as input and returns true if it has no prime factor larger than 5

*/

function isPrimeFactorLargerThanFive(number) {
    
    if ((number % 2 === 0) || (number % 3 === 0) || (number % 5 === 0)) {
        return true;
    } else {

        return false;
    }
}



console.log(isPrimeFactorLargerThanFive(20)); // false