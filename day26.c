/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.



#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            k = 1;
        }
        else if (i == 2 || i == 4)
        {
            k = 3;
        }
        else if (i == 3)
        {
            k = 5;
        }
   
    for (j = 1; j <= k; j++)
        printf("*\n");
    if (i < 5)
    {
        printf("\n");
    }
    }
    return 0;
}
*/