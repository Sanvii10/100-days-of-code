/*Q7: Write a program to swap two numbers without using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7
#include <stdio.h>

int main() {
    int a, b;


    printf("Enter the first number a = ");
    scanf("%d", &a);

    printf("Enter the second number b = ");
    scanf("%d", &b);

    printf("Before swap \n");
    printf("%d %d \n", a, b);

    printf("After swap \n");
    printf("%d %d \n", b, a);

    return 0;
}
*/

/*Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55


#include <stdio.h>

int main()
{
    int sum = 0, n, i;

    printf("Enter the number upto which you need the sum = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        sum = (sum + i);
    }

    printf("%d \n", sum);

    return 0;
}
    */
