<!-- 
Task
Given a string, S. of length N that is indexed from 0 to N - 1, print its even-indexed and odd-indexed characters as 2 space-
separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
 -->


 <?php
$_fp = fopen("php://stdin", "r");

function processData($input) {
    $inputs = explode("\n", $input);

    foreach ($inputs as $line) {
        $evenLetters = "";
        $oddLetters = "";

        for ($i = 0; $i < strlen($line); $i++) {
            if ($i % 2 == 0) {
                $evenLetters .= $line[$i];
            } else {
                $oddLetters .= $line[$i];
            }
        }

        echo $evenLetters . " " . $oddLetters . "\n";
    }
}

$ignoredLine = fgets($_fp); // Discard the first line
$input = "";
while ($line = fgets($_fp)) {
    $input .= $line;
}

processData($input);

fclose($_fp);
?>
