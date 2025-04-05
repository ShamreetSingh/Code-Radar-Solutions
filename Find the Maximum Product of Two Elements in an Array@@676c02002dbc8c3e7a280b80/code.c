#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[1];
    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < N; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("%d\n", max1 * max2);
    return 0;
}