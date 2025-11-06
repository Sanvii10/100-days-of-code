/*Q65: Search in a sorted array using binary search.


Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    scanf("%d", &target);
    

    int left = 0, right = n - 1;
    int result = -1;
    
    while(left <= right) {
        int mid = (left + right) / 2;
        
        if(arr[mid] == target) {
            result = mid;
            break;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    if(result != -1) {
        printf("Found at index %d\n", result);
    }
    else {
        printf("-1\n");
    }
    
    return 0;
}


*/

/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n + 1];
    
  
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int val;
    scanf("%d", &val);
    
    
    int pos = n;
    for(int i = 0; i < n; i++) {
        if(arr[i] > val) {
            pos = i;
            break;
        }
    }
    
   
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    
    arr[pos] = val;
    
   
    for(int i = 0; i < n + 1; i++) {
        printf("%d", arr[i]);
        if(i < n) printf(" ");
    }
    printf("\n");
    
    return 0;
}

*/