/*
Objective
instructional video.
Today, we are learning about an algorithmic concept called recursion.

Recursive Method for Calculating Factorial

Function Description
Complete the factorial function in the editor below. Be sure to use recursion.
factorial has the following paramter:
• int n: an integer

Returns
• int: the factorial of n
Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of 0.
*/


function processData(input) {
    
    let array = input.split("\n")
    n = parseInt(array[0]);
    let phoneBook = new Map();
    
    for (let i=1; i<=n; i++){
        let [name,phonenumber] = array[i].split(" ");
        phoneBook.set(name,phonenumber);
    }
    
    for (i = n+1; i<array.length; i++){
        let name= array[i];
        if(phoneBook.has(name)){
            console.log(`${name}=${phoneBook.get(name)}`)
        }
    
        else{
            console.log("Not found");
        }
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
    
