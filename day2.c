/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/


/*
#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the value of length : ");
    scanf("%f", &length);

    printf("Enter the value of breadth : ");
    scanf("%f", &breadth);

    if (length <= 0 && breadth <= 0)
    {
        printf("The length should be positive.");
    }
    else
    {
        area = (length * breadth);
        printf("The area is %.2f. \n", area);

        perimeter = (2 * (length + breadth));
        printf("The perimeter is %.2f. \n");
    }
    return 0;
}
*/


/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the cicrle = ");
    scanf("%f", &radius);

    if (radius<=0){
        printf("The value of radius should be positive.");
    }
    else {
        area = (3.14*radius*radius);
        printf("The area of the circle is %.2f. \n", area);

        circumference = (2*3.14*radius);
        printf("The circumference of the circle is %.2f. \n", circumference);

    }
    return 0;
}