/*Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    int largest = arr[0];
    int second_largest = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    printf("%d\n", second_largest);
    
    return 0;
}
    */

/*Q70: Rotate an array to the right by k positions.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/