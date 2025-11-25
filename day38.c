/*Q75: Add two matrices.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12


#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            printf("%d%c", a[i][j] + b[i][j], j < c1 - 1 ? ' ' : '\n');
    }
    
    return 0;
}

*/


/*Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False



#include <stdio.h>

int main() {
    int r, c, i, j, symmetric = 1;
    
    scanf("%d %d", &r, &c);
    int a[r][c];
    
   
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
    
    if (r != c) {
        symmetric = 0;
    } else {
        
        for (i = 0; i < r && symmetric; i++)
            for (j = 0; j < c && symmetric; j++)
                if (a[i][j] != a[j][i])
                    symmetric = 0;
    }
    
    if (symmetric)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}
    */