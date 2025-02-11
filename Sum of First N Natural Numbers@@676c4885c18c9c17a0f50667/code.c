#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    printf("%d", N);
    for(int i = 1; i <= N; i++) {
        sum += i;
        printf("Adding %d, Current Sum = %d\n", i, sum);
    }
    printf("%d", N, sum);
    return 0;
}
