#include <stdio.h>
#include <limits.h>

int findSecondSmallest(int arr[], int n) {
    int first = INT_MAX, second = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > first && arr[i] < second) {
            second = arr[i];
        }
    }

    return (second == INT_MAX) ? -1 : second;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", findSecondSmallest(arr, n));

    return 0;
}
