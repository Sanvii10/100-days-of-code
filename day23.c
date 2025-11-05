/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****



#include <stdio.h>

int main() {
    int i, j;

    for (i=1; i<6; i++) {
        for (j=1; j<6; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    */

/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22




#include <stdio.h>

int main() {
    int n, i, numerator, denominator;
    float sum = 0.0;
    
    scanf("%d", &n);
    
    // Calculate sum of series
    for (i = 1; i <= n; i++) {
        numerator = 2 * i;           // 2, 4, 6, 8, ...
        denominator = 4 * i - 1;     // 3, 7, 11, 15, ...
        sum = sum + (float)numerator / denominator;
    }
    
    printf("Approximate sum: %.2f\n", sum);
    
    return 0;
}

*/