/*Q97: Print the initials of a name.


Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.



#include <stdio.h>

int main()
{
    char name[100];
    
    scanf("%[^\n]s", name);


    char first = name[0];
    if (first >= 'a' && first <= 'z') {
        first = first - 32;  
        }
    printf("%c.", first);
    
    
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0') {
            char initial = name[i+1];
            
            
            if (initial >= 'a' && initial <= 'z') {
                initial = initial - 32;
            }
            
            printf("%c.", initial);
        }
    }
    
    printf("\n");
    return 0;
}
    
*/



/*Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/