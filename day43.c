/*Q85: Reverse a string.


Sample Test Cases:
Input 1:
abcd
Output 1:
dcba



#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);
    

    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    
    
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}

*/


/*Q86: Check if a string is a palindrome.


Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome



#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);
    

    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    
   
    int pali = 1;
    
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            pali = 0;
            break;
        }
    }
    
    if(pali) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}

*/