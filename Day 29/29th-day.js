/*
Task
Given set S = {1, 2,3, ..., N}. Find two integers, A and B (where A < B), from set S such that the value of A&:B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.

Function Description
Complete the bitwiseAnd function in the editor below. bitwiseAnd has the following paramter(s):
- int N: the maximum integer to consider
- int K: the limit of the result, inclusive

Returns
- int: the maximum value of A&: B within the limit.
*/



function bitwiseAnd(N, K) {
    let final = 0;
    
    for(let i=0;i<N;i++){
        for(let j=i+1;j<=N;j++){
            let value = i&j;
            
        if(value<K && value>final ){
            final = value;
        }
        }
    }
    return final;

}