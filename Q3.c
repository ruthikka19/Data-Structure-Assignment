#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], nge[MAX], stack[MAX];
    int n, top = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        nge[i] = -1;  
    }

  
    for (int i = 0; i < n; i++) {

        
        while (top != -1 && arr[i] > arr[stack[top]]) {
            nge[stack[top]] = arr[i];  
            top--;                      
        }

        
        top++;
        stack[top] = i;
    }

    
    printf("\nNext Greater Element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d → %d\n", arr[i], nge[i]);
    }

    return 0;
}
