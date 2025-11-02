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


   #include<stdio.h>
union address{
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[100];
    
};
int main(){
    union address addrss;
    printf("enter the present address");
    //scanf("%s",addrss.home_address);
    fgets(addrss.home_address,100,stdin);
    printf("present address %s",addrss.home_address);
} 