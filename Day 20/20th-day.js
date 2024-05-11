/*
Task
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:

1. Array is sorted in numSwaps swaps.
where numSwaps is the number of swaps that took place.

2. First Element: firstElement
where first Element is the first element in the sorted array.

3. Last Element: lastElement
where last Element is the last element in the sorted array.

Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.
*/



function swap(array, index1, index2) {
    var temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

function main() {
    const n = parseInt(readLine().trim(), 10);

    const a = readLine().replace(/\s+$/g, '').split(' ').map(aTemp => parseInt(aTemp, 10));
    
    let swapCount = 0;
    
    for(let i = 0; i<n; i++){
        for(let j = 0; j<n-1; j++){
            if(a[j] > a[j+1] ){
                swap(a,j,j+1);
                swapCount++;
            }
        }
        if(swapCount == 0){
            break;
        }
    }
    
    console.log(`Array is sorted in ${swapCount} swaps.`);
    console.log(`First Element: ${a[0]}`);
    console.log(`Last Element: ${a[n-1]}`);
}