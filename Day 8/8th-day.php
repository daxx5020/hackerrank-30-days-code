<!-- 
Task
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will
then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from
your phone book on a new line in the form name=phoneNumber: if an entry for name is not found, print Not found instead.
Note: Your phone book should be a Dictionary/Map/HashMap data structure.
 -->

<?php
$_fp = fopen("php://stdin", "r");

// Read input from STDIN
$n = intval(fgets($_fp));
$phoneBook = [];

// Populate the phone book
for ($i = 0; $i < $n; $i++) {
    $line = trim(fgets($_fp));
    list($name, $phoneNumber) = explode(' ', $line);
    $phoneBook[$name] = $phoneNumber;
}

// Query the phone book
while ($query = trim(fgets($_fp))) {
    if (array_key_exists($query, $phoneBook)) {
        echo $query . '=' . $phoneBook[$query] . PHP_EOL;
    } else {
        echo "Not found" . PHP_EOL;
    }
}

fclose($_fp);
?>

