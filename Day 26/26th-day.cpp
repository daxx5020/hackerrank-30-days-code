/*
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
*/


#include <iostream>
using namespace std;

void processData(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine = 0;
    
    if (y1 > y2) {
        fine = 10000;
    } else if (y1 == y2) {
        if (m1 > m2) {
            fine = 500 * (m1 - m2);
        } else if (m1 == m2 && d1 > d2) {
            fine = 15 * (d1 - d2);
        }
    }
    
    cout << fine << endl;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    
    cin >> d1 >> m1 >> y1;
    
    cin >> d2 >> m2 >> y2;

    processData(d1, m1, y1, d2, m2, y2);
    
    return 0;
}

