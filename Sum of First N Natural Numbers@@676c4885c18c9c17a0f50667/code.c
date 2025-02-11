#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    printf("%d", N);
    for(int i = 1; i <= N; i++) {
        sum += i;
        printf("%d", i);
    }
    printf("%d", N);
    return 0;
}
