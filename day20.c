/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)



#include <stdio.h>

int main() {
    int n, digit, product = 1;
    
    scanf("%d", &n);
    
   
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product = product * digit;
        }
        n = n / 10;
    }
    
    printf("%d\n", product);
    
    return 0;
}

*/


/*Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000



#include <stdio.h>

int main() {
    int n, digit, complement = 0, place = 1;
    
    scanf("%d", &n);
    
    
    while (n > 0) {
        digit = n % 10;
        
      
        if (digit == 0)
            complement = complement + 1 * place;
        else
            complement = complement + 0 * place;
        
        place = place * 10;
        n = n / 10;
    }
    
    printf("%d\n", complement);
    
    return 0;
}

*/