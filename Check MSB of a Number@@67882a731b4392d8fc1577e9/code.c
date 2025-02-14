#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int msb = (num & (1 << 31)) ? 1 : 0;

    if (msb)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
