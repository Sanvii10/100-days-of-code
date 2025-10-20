/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong



#include <stdio.h>

int main() {
    int n, original, temp, digit, sum = 0, digits = 0, power, i;
    
    scanf("%d", &n);
    original = n;
    temp = n;
    
    while (temp > 0) {
        digits = digits + 1;
        temp = temp / 10;
    }
    
    temp = n;
    

    while (temp > 0) {
        digit = temp % 10;
        
       
        power = 1;
        for (i = 0; i < digits; i++)
            power = power * digit;
        
        sum = sum + power;
        temp = temp / 10;
    }
    
   
    if (original == sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    
    return 0;
}
    */



/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime



#include <stdio.h>

int main()
{
    int n, i, p = 1;

    printf("Enter a number = ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("The given number is not a prime number");
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            else
            {

            printf("The number % d is not a prime number", n);
             }
        }
        printf("The number %d is a prime number", n);
    }
    return 0;
}
    */



