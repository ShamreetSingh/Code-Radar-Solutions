#include <stdio.h>
void decimalToBinary(int n) {
    int binary[32], i = 0;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        binary[i++] = n & 1;
        n >>= 1;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    printf("\n");
    return 0;
}
