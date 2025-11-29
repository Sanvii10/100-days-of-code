/*Q93: Check if two strings are anagrams of each other.


Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams



#include <stdio.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    
    
    int count1[26] = {0};
    for(int i = 0; str1[i] != '\0'; i++) {
        int idx = str1[i] - 'a';
        count1[idx]++;
    }
    
    
    int count2[26] = {0};
    for(int i = 0; str2[i] != '\0'; i++) {
        int idx = str2[i] - 'a';
        count2[idx]++;
    }
    
    
    int anagrams = 1;
    for(int i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            anagrams = 0;
            break;
        }
    }
    
    if(anagrams) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    
    return 0;
}
    */

/*Q94: Find the longest word in a sentence.



Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/