#include <stdio.h>

int main() {
    int n, i, Prime = 1;
    scanf("%d", &n);

    if (n < 2) Prime = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            Prime = 0;
            break;
        }
    }
    if (Prime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
