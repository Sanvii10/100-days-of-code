/* Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year
#include <stdio.h>
int main()
{
    int year;

    printf("Enter the year = ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("This year is a leap year.");
    }
    else if (year % 100 == 0)
    {
        printf("This year is not a leap year.");
    }
    else if (year % 4 == 0)
    {
        printf("This year is a leap year.");
    }
    else
    {
        printf("This year is not a leap year");
    }
    return 0;
}
    */


/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main() {
    char q;
    

    printf("Enter the letter = ");
    scanf("%c", &q);

    if(q=='a' || q=='e' || q=='i' || q=='o' || q=='u'){
        printf("The letter is a vowel.");

    }
    else if (q=='A' || q=='E' ||q=='I' ||q=='O'|| q=='U'){
        printf("The letter is a vowel.");
    }
    else {
        printf("The letter is a consonant.");
    }

    return 0;
}