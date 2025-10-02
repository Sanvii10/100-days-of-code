/*Q17: Write a program to find the roots of a quadratic equation and categorize them.


Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex



#include <stdio.h>
#include <math.h>

int main()
{
    float a, D, b, c, r1, r2, real, img;

    printf("Enter the coefficients of a, b and c of a quadratic equation = ");
    scanf("%f %f %f", &a, &b, &c);

    D = ((b * b) - (4 * a * c));

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different: %.2f , %.2f \n", r1, r2);
    }
    else if (D == 0)
    {
        r1 = -b / (2 * a);
        printf("Roots are real and same: %.2f \n", r1);
    }
    else
    {
        real = -b / (2 * a);
        img = sqrt(-D) / (2 * a);
        printf("Roots are complex: %.2f + %.2f , %.2f - %.2f \n", real, img, real, img);
    }

    return 0;
}
    */


   /* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F


#include <stdio.h>

int main() {
    float per;

    printf("Enter percentage = ");
    scanf("%f", &per);

    if(per >=90 && per <= 100){
        printf("Grade A");
    }
    else if (per >=80 && per <= 89){
        printf("Grade B");
    }
    else if (per >= 70 && per <= 79){
        printf("Grade C");
    }
    else if (per >= 60 && per <= 69){
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }
    return 0;
}
    */