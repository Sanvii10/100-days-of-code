/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime



#include <stdio.h>

int main()
{
    int n, i, p = 1;

    printf("Enter a number = ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("The given number is not a prime number");
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            else
            {

            printf("The number % d is not a prime number", n);
             }
        }
        printf("The number %d is a prime number", n);
    }
    return 0;
}
    */



