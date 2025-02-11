#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("Error: Invalid input\n");
        return 1;
    }
    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    return 0;
}
