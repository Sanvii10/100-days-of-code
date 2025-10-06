/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3



#include <stdio.h>

int main()
{
    int a, b, sum, subtraction, multiplication, division, modulus;
    char ch;

    printf("Enter first number = ");
    scanf("%d", &a);

    printf("Enter second number = ");
    scanf("%d", &b);

    printf("Enter a character = ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        sum = a + b;
        printf("%d \n", sum);
        break;

    case '-':
        subtraction = a - b;
        printf("%d \n", subtraction);
        break;

    case '*':
        multiplication = a * b;
        printf("%d \n", multiplication);
        break;

    case '/':
        if (b != 0)
        {
            division = a / b;
            printf("%d \n", division);
        }
        else
        {
            printf("Error division cannot be performed.");
        }
        break;

    case '%':
        if (b != 0)
        {
            modulus = (a % b);
            printf("%d \n", modulus);
        }
        else
        {
            printf("Error modulus operation cannot be performed.");
        }
    }
    return 0;
}
    */

/* Q26: Write a program to print numbers from 1 to n.


Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3



#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number till which you want the number to b printed = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}
     */
   