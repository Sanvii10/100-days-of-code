/*Q43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number



#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact;
    
    scanf("%d", &n);
    temp = n;
    

    while (temp > 0) {
        digit = temp % 10;
        
       
        fact = 1;
        for (int i = 1; i <= digit; i++)
            fact = fact * i;
        
        sum = sum + fact;
        temp = temp / 10;
    }
    
    
    if (sum == n)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    
    return 0;
}
    */

/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4



#include <stdio.h>

int main() {
    int n, i, numerator, denominator;
    float sum = 0.0;
    
    scanf("%d", &n);
    
   
    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;      
        denominator = 2 * i;         
        sum = sum + (float)numerator / denominator;
    }
    
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}
    */