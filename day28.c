/*Q55: Write a program to print all the prime numbers from 1 to n.


Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19


#include <stdio.h>

int main() {
    int n,i,j;

    printf("Enter the no. upto which you want a prime number = ");
    scanf("%d", &n);

    if (n == 1){
        printf("The given number is a wrong input.\n");
    }


    return 0;
}

*/


/*Q56: Read and print elements of a one-dimensional array.


Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 
Output 2:
1 2 3 4 5


#include <stdio.h>

int main() {
    int a, i;
    int arr[100];
    printf("Enter the number of elements = ");
    scanf("%d", &a);
    printf("Enter the elements = ");
    for (i=0; i<a; i++){
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }

    return 0;
}
    */