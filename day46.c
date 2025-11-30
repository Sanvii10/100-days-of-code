/*Q91: Remove all vowels from a string.


Sample Test Cases:
Input 1:
education
Output 1:
dctn


#include <stdio.h>
#include <string.h>

int vowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;  
    else
        return 0;    
}

int main() {
    char str[100], result[100];
    int i, j = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!vowel(str[i])) {   
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}

*/
/*Q92: Find the first repeating lowercase alphabet in a string.


Sample Test Cases:
Input 1:
stress
Output 1:
s



#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);
    
    int count[26] = {0};  
    
   
    for(int i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        count[idx]++;
    }
    
    
    for(int i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        if(count[idx] > 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }
    
    return 0;
}

*/
