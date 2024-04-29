/*
Task
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will
then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from
your phone book on a new line in the form name=phoneNumber: if an entry for name is not found, print Not found instead.
Note: Your phone book should be a Dictionary/Map/HashMap data structure.
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
    
