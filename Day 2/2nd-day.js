/*
Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

Function Description
Complete the solve function in the editor below.

solve has the following parameters:

int meal_cost: the cost of food before tip and tax
int tip_percent: the tip percentage
int tax_percent: the tax percentage
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.
*/



'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

function solve(meal_cost, tip_percent, tax_percent) {
    var tip_cost = Math.round((meal_cost*tip_percent)/100 + (meal_cost*tax_percent)/100 + meal_cost)
    console.log(tip_cost);

}

function main() {
    const meal_cost = parseFloat(readLine().trim());

    const tip_percent = parseInt(readLine().trim(), 10);

    const tax_percent = parseInt(readLine().trim(), 10);

    solve(meal_cost, tip_percent, tax_percent);
}




