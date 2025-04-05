#include <stdio.h>

int main() {
    int N, i;
    int first = -1, second = -1;
    

    scanf("%d", &N);
    
    if (N <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[N];

    
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    if (second == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }
    
    return 0;
}