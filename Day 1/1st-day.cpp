/*Task
Complete the code in the editor below. The variables i,d ,s and s are already declared and initialized for you. You must:

    Declare 3 variables: one of type int, one of type double, and one of type String.
    Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.
    Use the + operator to perform the following operations:
        Print the sum of i plus your int variable on a new line.
        Print the sum of d plus your double variable to a scale of one decimal place on a new line.
        Concatenate s with the string you read as input and print the result on a new line.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
     int a = 0;
    double b = 0.0;
    char c[100];

    // Read input
    scanf("%d", &a);
    scanf("%lf", &b);
    std::cin.ignore();
    std::cin.getline(c, 100);

    int sum_int = a + i;
    double sum_double = b + d;
    std::string concat_string = s + c;

    printf("%d\n", sum_int);
    printf("%.1lf\n", sum_double);
    std::cout << concat_string << std::endl;

    return 0;
}