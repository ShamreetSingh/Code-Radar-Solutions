#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
    return 0;
}
