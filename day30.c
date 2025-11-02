/*Q59: Count even and odd numbers in an array.


Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0



#include <stdio.h>

int main() {
    int n;
    int even=0, odd=0;

    printf("Enter number of elements= ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers= ", n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even = %d \nOdd= %d", even, odd);

    return 0;
}
    */

/*Q60: Count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1



#include <stdio.h>

int main() {
    int n;
    int positive = 0, negative = 0, zero = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    
    return 0;
}

*/