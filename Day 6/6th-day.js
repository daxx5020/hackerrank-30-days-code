/*
Task
Given a string, S. of length N that is indexed from 0 to N - 1, print its even-indexed and odd-indexed characters as 2 space-
separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
*/


function processData(input) {
    let inputs = input.split("\n").slice(1);

    for (let input of inputs) {
        let even_letters = "";
        let odd_letters = "";

        for (let i = 0; i < input.length; i++) {
            if (i % 2 == 0) {
                even_letters += input[i];
            } else {
                odd_letters += input[i];
            }
        }

        console.log(even_letters + " " + odd_letters);
    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});



