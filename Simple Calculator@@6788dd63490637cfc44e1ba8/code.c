#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("error\n");
        return 1;
    }
    switch(Operator)
        case   '+':
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
                printf("error\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
    }
    return 0;
}
