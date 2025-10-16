/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25



#include <stdio.h>

int main() {
    int n, i, sum =0; 

    printf("Enter the number n = ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        sum = (2 * i -1);
    }
    printf("Sum of first %d odd numbers = %d \n", n, sum);

    return 0;
}

*/


/*Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)



#include <stdio.h>

int main() {
    int n, i, product = 1;
    
    scanf("%d", &n);
    
    
    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }
    
    printf("%d\n", product);
    
    return 0;
}

*/