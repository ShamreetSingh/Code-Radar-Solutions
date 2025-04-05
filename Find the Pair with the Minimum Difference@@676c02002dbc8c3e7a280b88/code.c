#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void findSmallestDifference(int arr[], int n) {
    if (n < 2) {
        printf("-1\n");
        return;
    }
    qsort(arr, n, sizeof(int), cmpFunc); 

    int minDiff = INT_MAX;
    int num1 = -1, num2 = -1;

    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2);
}

int cmpFunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSmallestDifference(arr, n);
    free(arr);
    
    return 0;
}