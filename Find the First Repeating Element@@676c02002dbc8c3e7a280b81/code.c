#include <stdio.h>

int findFirstRepeatingElement(int arr[], int n) {
    int index[100000] = {0};
    
    for (int i = 0; i < n; i++) {
        if (index[arr[i]] > 0) {
            return arr[i];
        }
        index[arr[i]] = 1;
    }
    
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findFirstRepeatingElement(arr, n);
    printf("%d\n", result);

    return 0;
}
