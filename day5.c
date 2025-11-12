/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
#include <stdio.h>

int main()
{
    // declare variables for principal, interest and time

    float p, si, t, r;

    // Taking values from user
    printf("Input value of principal = ");
    scanf("%f", &p);

    printf("Input value of interest =  ");
    scanf("%f", &r);

    printf("Input value of time = ");
    scanf("%f", &t);

    // Condition and calculating simple interest
    if (p <= 0 || t <= 0 || r <= 0)
    {
        printf("The value of principal, rate of interest or time canot be negative or zero");
    }

    else if (p >= 0 || t >= 0 || r >= 0)
    {

        si = ((p * r * t) / 100);
        printf("The value of simple interest is %.2f \n", si);
    }
    else
    {
        printf("The value of simple interest cannot be calculated as the inputted values are not correct");
    }

    return 0;
}
    */

/*  Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2



#include <stdio.h>

int main()
{
    int hours, mins, seconds, secs, remainder, remainder2;

    printf("Enter the time in seconds = ");
    scanf("%d", &seconds);

    // conversion of seconds into hours
    hours = (seconds / 3600);
    remainder = (seconds % 3600);
    mins = (remainder / 60);
    remainder2 = (remainder % 60);

    printf("%d:%d:%d", hours, mins, remainder2);

    return 0;
}
    */