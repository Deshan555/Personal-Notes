// https://www.hackerrank.com/challenges/counting-valleys/problem

/*
Problem: Counting Valleys

Hi, here is the solution for this HackerRank problem “Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography. During his last hike he took exactly n steps. For every step he took, he noted if it was an uphill, U, or a downhill,  D step. Gary’s hikes start and end at sea level and each step up or down represents a 1  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
Given Gary’s sequence of up and down steps during his last hike, find and print the number of valleys he walked through.

For example, if Gary’s path is str = [DDUUUUDD] , he first enters a valley 2 units deep. Then he climbs out an up onto a mountain 2 units high. Finally, he returns to sea level and ends his hike.”

Function Description

Complete the countingValleys function in the editor below. It must return an integer that denotes the number of valleys Gary traversed.

countingValleys has the following parameter(s):

- n: the number of steps Gary takes
- str: a string describing his path

Explanation of the solution:

# Gary have this path [D, D, U, U, U, D, D] (or like this format is the same value “DDUUUDD“) where a “D” means DOWN and “U” means UP.
*/
function countingValleys(steps, steps_array){
    
    let valley_count = 0;

    var data = 0;

    for(let x =0; x < steps; x++){

        console.log(steps_array.charAt(x));

        if(steps_array.charAt(x) == 'U'){
            data++;

            if(data == 0){
                valley_count++;
            }
        }else{
            data--;
        }
    }

    return valley_count;
    
}
  
console.log(countingValleys(12, 'DDUUDDUDUUUD'));
  