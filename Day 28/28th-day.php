<!-- 
Task
Consider a database table. Emails, which has the attributes Firs  Name and Email ID. Given I rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

Input Format
The first line contains an integer. N. total number of rows in the table.
Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.
 -->


<?php

$N = intval(trim(fgets(STDIN)));
$NamesArray = array();

for ($N_itr = 0; $N_itr < $N; $N_itr++) {
    $first_multiple_input = explode(' ', rtrim(fgets(STDIN)));

    $firstName = $first_multiple_input[0];
    $emailID = $first_multiple_input[1];

    if (substr($emailID, -10) === "@gmail.com") {
        $NamesArray[] = $firstName;
    }
}

sort($NamesArray);

foreach ($NamesArray as $name) {
    echo $name . "\n";
}
?>
