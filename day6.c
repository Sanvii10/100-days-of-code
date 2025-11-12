/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.


Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even
#include <stdio.h>

int main()
{
    int a;

    printf("Enter the value of integer = ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The inputted number is even.");
    }
    else
    {
        printf("The inputted number is odd.");
    }
    return 0;
}
    */

/* Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive



#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number = ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Zero \n");
    }
    else if (a <= 0)
    {
        printf("Negative \n");
    }
    else
    {
        printf("Positive \n");
    }
    return 0;
}
    */