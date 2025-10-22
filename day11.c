/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days



#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number (1-12) = ");
    scanf("%d", &a);

    if (a <= 0 || a >= 12)
    {
        printf("Enter number between 1 and 12");
    }
    else
    {
        switch (a)
        {
        case 1:
            printf("January \n");
            printf("No. of days = 30 \n");
            break;

        case 2:
            printf("Feburary \n");
            printf("No. of days = 28 or 29\n");
            break;

        case 3:
            printf("March \n");
            printf("No. of days = 31 \n");
            break;

        case 4:
            printf("April \n");
            printf("No. of days = 30 \n");
            break;

        case 5:
            printf("May \n");
            printf("No. of days = 31 \n");
            break;

        case 6:
            printf("June \n");
            printf("No. of days = 30 \n");
            break;

        case 7:
            printf("July \n");
            printf("No. of days = 31 \n");
            break;

        case 8:
            printf("August \n");
            printf("No. of days = 31 \n");
            break;

        case 9:
            printf("September \n");
            printf("No. of days = 30 \n");
            break;

        case 10:
            printf("October \n");
            printf("No. of days = 31 \n");
            break;

        case 11:
            printf("November \n");
            printf("No. of days = 30 \n");
            break;

        case 12:
            printf("Decemeber \n");
            printf("No. of days = 31 \n");
            break;
        }
    }
    return 0;
}
    */


/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss



#include <stdio.h>

int main() {
    float cp, sp, percentage;
    
    scanf("%f %f", &cp, &sp);
    
    if (sp > cp) {
        
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
    else if (sp < cp) {
        
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", percentage);
    }
    else {
        
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
    */