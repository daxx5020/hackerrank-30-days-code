/*
Task
Consider a database table. Emails, which has the attributes Firs  Name and Email ID. Given I rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

Input Format
The first line contains an integer. N. total number of rows in the table.
Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.
*/



function main() {
    const N = parseInt(readLine().trim(), 10);
    let NamesArray = [];

    for (let NItr = 0; NItr < N; NItr++) {
        const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

        const firstName = firstMultipleInput[0];

        const emailID = firstMultipleInput[1];
        
        let names = emailID.split(firstName);
        
        if(names[1] == "@gmail.com"){
            NamesArray.push(firstName);
        }
    }
    let sortedNames = NamesArray.sort();
        
    for(let i=0;i<sortedNames.length;i++){
        console.log(sortedNames[i]);
    }
} 