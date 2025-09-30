/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character



#include <stdio.h>

int main() {
    char a;

    printf("Enter a character = ");
    scanf("%c", &a);

    if(a >='A' && a <='Z'){
        printf("The character is an uppercase letter.");
    }
    else if (a >='a' && a <='z'){
        printf("The charater is a lowercase letter.");
    }
    else if (a >=0 && a<=9){
        printf("The character is a digit.");
    }
    else {
        printf("The character is a special character.");
    }

    return 0;
}
    */


  /*  Q16: Write a program to input three numbers and find the largest among them using if–else.


Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0



#include <stdio.h>

int main() {
     int a, b, c;
     printf("Enter the first number = ");
     scanf("%d", &a);

     printf("Enter the second number = ");
     scanf("%d", &b);

     printf("Enter the third number = ");
     scanf("%d", &c);

     if(a > b && a > c){
        printf("The largest number is %d", a);

     }
     else if (b > a && b > c){
        printf("The larges number is %d", b);
     }

     else {
        printf("The largest number is %d", c);
     }
    return 0;
}
*/