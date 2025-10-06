/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene



#include <stdio.h>

int main() {
    float x, y, z;
// Take sides of a triangle from user
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f" , &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
    printf("Sides of a triangle must be positive and non-zero.\n");
    }

// Check if the triangle is valid or not
if (((x + y )> z) && ((x + z) > y) && ((y + z) > x)) {
    printf("The given sides form a valid triangle.\n");

if (x == y && y == z ) {
    printf("It is an equilateral triangle.\n");
}
else if (x == y|| y == z || z == x ) {
    printf("It is an isoceles triangle.\n");
}
else {
    printf("It is a scalene triangle.\n");
}


    return 0;

}
    */

/* Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.


Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday


#include <stdio.h>

int main()
{
    int day, a;

    printf("Enter the number (1-7) = ");
    scanf("%d", &a);

    if (a >= 7 || a <= 0)
    {
        printf("Please enter a number between 1 and 7");
    }
    else
    {
        switch (a)
        {
        case 1:
            printf("Monday \n");
            break;

        case 2:
            printf("Tuesday \n");
            break;

        case 3:
            printf("Wednesday \n");
            break;

        case 4:
            printf("Thursday \n");
            break;

        case 5:
            printf("Friday \n");
            break;

        case 6:
            printf("Saturday \n");
            break;

        case 7:
            printf("Sunday \n");
            break;
        }
    }

return 0;
}


*/