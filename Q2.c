#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char expr[MAX];
    char stack[MAX];
    int top = -1;
    int balanced = 1;

    printf("Enter an expression: ");
    scanf("%s", expr);

    int n = strlen(expr);

    for (int i = 0; i < n; i++) {

       
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            top++;
            stack[top] = expr[i];
        }

       
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {

            
            if (top == -1) {
                balanced = 0;
                break;
            }

           
            char top_char = stack[top];
            top--;

            if ((expr[i] == ')' && top_char != '(') ||
                (expr[i] == '}' && top_char != '{') ||
                (expr[i] == ']' && top_char != '[')) {
                balanced = 0;
                break;
            }
        }
    }

    
    if (top != -1) {
        balanced = 0;
    }

    if (balanced)
        printf("Balanced Expression\n");
    else
        printf("Unbalanced Expression\n");

    return 0;
}
