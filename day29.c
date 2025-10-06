/*Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

#include <stdio.h>

int main() {
    int a, i, j;
    int sum = 0;

   
    scanf("%d", &a);

    int arr[100];

    
    for (i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for (i=0; i<a; i++){
        sum = sum + arr[i];

    }
    printf("%d ", sum);
    return 0;
}
    
*/


/*Q58: Find the maximum and minimum element in an array.


Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main() {
    int a, i;

    printf("The no. of elements = ");
    scanf("%d",&a);
    return 0;
}


