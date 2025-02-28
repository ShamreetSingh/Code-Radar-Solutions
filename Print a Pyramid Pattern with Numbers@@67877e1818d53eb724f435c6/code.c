#include <stdio.h>
int main() {
    int N, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        for(j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}