/*Q61: Search for an element in an array using linear search.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1



#include <stdio.h>

int main() {
    int n, search, found = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }
    
    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }
    
    return 0;
}

*/


/*Q62: Reverse an array without taking extra space.


Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1




#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int left = 0;
    int right = n - 1;
    
    while (left < right) {

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++;
        right--;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

*/