#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    
    k = k % n;
    
    
    int temp[n];
    
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    
    
    scanf("%d", &n);
    
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    scanf("%d", &k);

    rotateArray(arr, n, k);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}