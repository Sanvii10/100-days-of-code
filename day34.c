/*Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n + 1];  
    
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, val;
    scanf("%d %d", &pos, &val);
    

    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    
    arr[pos - 1] = val;
    
   
    for(int i = 0; i < n + 1; i++) {
        printf("%d", arr[i]);
        if(i < n) printf(" ");
    }
    printf("\n");
    
    return 0;
}

*/

/*Q68: Delete an element from an array.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    scanf("%d", &pos);
    
   \
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    
    for(int i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        if(i < n - 2) printf(" ");
    }
    printf("\n");
    
    return 0;
}

*/