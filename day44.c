/*Q88: Replace spaces with hyphens in a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world



#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    
    // Replace spaces with hyphens
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }
    
    printf("%s", str);
    
    return 0;
}

*/