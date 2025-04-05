#include <stdio.h>

int isMonotonic(int arr[], int n) {
    int increasing = 1, decreasing = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = 0;
        } else if (arr[i] < arr[i - 1]) {
            increasing = 0;
        }
    }

    return increasing || decreasing;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isMonotonic(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
