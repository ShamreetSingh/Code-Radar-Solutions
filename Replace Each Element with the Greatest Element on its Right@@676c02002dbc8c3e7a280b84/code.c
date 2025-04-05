#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    int max_from_right = -1;
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max_from_right;
        if (temp > max_from_right) {
            max_from_right = temp;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    replaceWithGreatest(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
