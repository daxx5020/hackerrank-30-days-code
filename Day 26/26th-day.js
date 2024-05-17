/*
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
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