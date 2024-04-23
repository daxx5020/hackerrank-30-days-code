<!-- Task
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
 -->


<?php

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

 function solve($meal_cost, $tip_percent, $tax_percent) {
    $tip_cost = round(($meal_cost * $tip_percent) / 100 + ($meal_cost * $tax_percent) / 100 + $meal_cost);
     echo $tip_cost . "\n";
 
 }
 
 $meal_cost = doubleval(trim(fgets(STDIN)));
 
 $tip_percent = intval(trim(fgets(STDIN)));
 
 $tax_percent = intval(trim(fgets(STDIN)));
 
 solve($meal_cost, $tip_percent, $tax_percent);
?>
