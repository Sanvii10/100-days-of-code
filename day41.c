/*Q81: Count characters in a string without using built-in length functions.


Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1



#include <stdio.h>

int main() {
     char str [100];
     printf("Enter a string= ");
     scanf("%s", str);
     int count = 0;
     
     for (int i = 0; str[i] != '\0'; i++) {
        count++;
     }
     printf("%d\n", count);
    return 0;
}
    */


/*Q82: Print each character of a string on a new line.


Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char str [100];
    printf("Enter string= ");
    scanf("%s", str);

    for(int i =  0; str[i] != '\0'; i++){
        printf("%c \n", str[i]);
    }
    return 0;
}