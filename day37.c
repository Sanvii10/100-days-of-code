/*Q73: Find the sum of each row of a matrix and store it in an array.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15



#include <stdio.h>

int main() {
    int r, c, i, j;
    
    scanf("%d %d", &r, &c);
    int a[r][c], Sum[r];
    
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
    for (i = 0; i < r; i++) {
          Sum[i] = 0;
        for (j = 0; j < c; j++)
            Sum[i] = Sum[i] + a[i][j];
    }
    
    for (i = 0; i < r; i++)
        printf("%d%c", Sum[i], i < r - 1 ? ' ' : '\n');
    
    return 0;
}
    */


/*Q74: Find the transpose of a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6



    #include <stdio.h>

int main() {
    int r, c, i, j;
    
    scanf("%d %d", &r, &c);
    int a[r][c], t[c][r];
    
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            t[j][i] = a[i][j];

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d%c", t[i][j], j < r - 1 ? ' ' : '\n');
    }
    
    return 0;
}

*/