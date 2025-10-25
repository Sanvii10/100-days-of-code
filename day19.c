/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21



#include <stdio.h>

int main() {
    int a, b, lcm, max;
    
    scanf("%d %d", &a, &b);
    

    if (a > b)
        max = a;
    else
        max = b;
    
   
    lcm = max;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm = lcm + max;
    }
    
    printf("%d\n", lcm);
    
    return 0;
}

*/

/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27



#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    
    scanf("%d", &n);
    
    // Extract and sum each digit
    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
    */