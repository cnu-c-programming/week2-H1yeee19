#include <stdio.h>

int main()
{
    int a, b, result;
    char oper;

    scanf("%d %d %c", &a, &b, &oper);
    if (oper == '+') {
        result = a + b;
    } else if (oper == '-') {
        result = a - b;
    } else if (oper == '*') {
        result = a * b;
    } else if (oper == '/') {
        result = a / b;
    } else {
        printf("Invalid operator\n");
        return 1;
    }
    
    printf("%d\n", result);
    
    return 0;
}

