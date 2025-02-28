#include <stdio.h>
int countLeadingZeros(int n) {
    if (n == 0) return 32;
    
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }
        count++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countLeadingZeros(n));
    return 0;
}
