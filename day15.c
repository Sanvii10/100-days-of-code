/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6



#include <stdio.h>

int main()
{
    int n, i;
    int factorial = 1;

    printf("Enter a number to calculate it's factorial = ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial cannot be calculated for negative numbers.");
    }
    else
    {

        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d \n", n, factorial);
    }
    return 0;
}
    */

/*  Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

