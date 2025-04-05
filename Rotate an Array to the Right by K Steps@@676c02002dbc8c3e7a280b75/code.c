#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Normalize k in case it's greater than n
    k = k % n;
    
    // Create a temporary array to hold the rotated values
    int temp[n];
    
    // Fill the temporary array with the rotated values
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Copy the temporary array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the number of steps to rotate
    scanf("%d", &k);
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}