/*
Task
Your local library needs your help! Given the expected and actual return dates for a library book. create a program that calculates the fine (if any). The fee structure is as follows:

1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine = 0).
2. If the book is returned after the expected return day but still within the same calendar month anc year as the expected return date, fine = 15 Hackos × (the number of days late).
3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos × (the number of months late).
4. If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.
*/



function processData(input) {
    let date = input.split("\n");
    let fine= 0;    
    const [d1, m1, y1] = date[0].split(' ').map(Number);
    const [d2, m2, y2] = date[1].split(' ').map(Number);
    if(y1>y2){
        fine=10000;
    }
    else if(y1===y2){
        if(m1>m2){
        fine = 500 * (m1-m2);
        }
        else if(m1===m2 && d1>d2){
        fine = 15 * (d1-d2);
        }   
    }
    console.log(fine);
} 