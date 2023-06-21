/*
Sami's spaceship crashed on Mars! She sends a series of SOS messages to Earth for help.

Letters in some of the SOS messages are altered by cosmic radiation during transmission. 
Given the signal received by Earth as a string, s, determine how many letters of Sami's SOS have been changed by radiation.


For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit.

Function Description:

Complete the marsExploration function in the editor below. It should return an integer representing the number of letters changed during transmission.

marsExploration has the following parameter(s):

s: the string as received on Earth

*/

function marsExploration(s) 
{
    
    let message = s;

    let default_message = "SOS";

    let count = message.length;

    console.log(count);

    var error_count = 0;

    for (let i = 0; i < message.length; i++) {
        if (message[i] !== default_message[i % 3]) {
            error_count += 1;
        }
    }

    return error_count;
}


console.log(marsExploration("SSOSSPSSQSSOR"));




