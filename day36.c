/*Q71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4


#include <stdio.h>

int main() {
    int r, c, i, j;
    
    scanf("%d %d", &r, &c);
    int a[r][c];
    
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d%c", a[i][j], j < c - 1 ? ' ' : '\n');
    }
    
    return 0;
}
    */


/*Q72: Find the sum of all elements in a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21



#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    
    scanf("%d %d", &r, &c);
    int a[r][c];
    
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    
    printf("%d\n", sum);
    
    return 0;
}

*/