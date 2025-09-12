/* Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/


/*
#include <stdio.h>

int main()
{

    float a, b, sum;

    printf("Enter the value of a : ");
    scanf("%f", &a);

    printf("Enter the value of b : ");
    scanf("%f", &b);

    sum = (a + b);
    printf("The sum is : %.2f", sum);

    return 0;
}

*/


/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{
    float a, b, sum, difference, product, quotient;

    printf("Enter the value of a : ");
    scanf("%f", &a);

    printf("Enter the value of b : ");
    scanf("%f", &b);

    sum = (a + b);
    printf("The sum is : %.2f \n", sum);

    difference = (a - b);
    printf("The difference is : %.2f \n", difference);

    product = (a * b);
    printf("The product is : %.2f \n", product);

    quotient = (a / b);
    printf("The quotient is : %.2f \n", quotient);

    return 0;
}