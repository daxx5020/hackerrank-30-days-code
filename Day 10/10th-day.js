/*
Task
Given a base-10 integer, n. convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive l's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

Example
n = 125|
The binary representation of 12510 is 11111012. In base 10. there are 5 and 1 consecutive ones in two groups. Print the maximum, 5.
*/


function main() {
    const n = parseInt(readLine().trim(), 10);
    let binary = n.toString(2);
    
    let maxOnes = 0;
    let currentOnes = 0;
    
    for (let i = 0; i < binary.length; i++) {
        if (binary[i] === '1') {
            currentOnes++;
        } else {
            maxOnes = Math.max(maxOnes, currentOnes);
            currentOnes = 0;
        }
    }
    
    maxOnes = Math.max(maxOnes, currentOnes);
    
    console.log(maxOnes); 
}
