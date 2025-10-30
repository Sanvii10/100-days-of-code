/*Q31: Write a program to take a number as input and print its equivalent binary representation.



Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111



#include <stdio.h>

int main() {
    int n, binary = 0, remainder, place = 1;
    
    scanf("%d", &n);
    
    while (n > 0) {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }
    
    printf("%d\n", binary);
    
    return 0;
}


*/


/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome


#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;
    
    scanf("%d", &n);
    original = n;
    
    
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    
    
    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    
    return 0;
}

*/
