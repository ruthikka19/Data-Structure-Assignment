#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX];
    char stack[MAX];
    int top = -1;

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    
    for (int i = 0; i < n; i++) {
        top++;
        stack[top] = str[i];
    }

    printf("Reversed string: ");
    for (int i = 0; i < n; i++) {
        printf("%c", stack[top]);
        top--;
    }
    printf("\n");

    return 0;
}


