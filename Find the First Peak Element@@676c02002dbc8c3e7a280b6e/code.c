#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) return arr[0]; // If only one element, it's a peak
    
    for (int i = 0; i < n; i++) {
        // Check if first or last element is a peak
        if ((i == 0 && arr[i] > arr[i + 1]) || 
            (i == n - 1 && arr[i] > arr[i - 1])) {
            return arr[i];
        }
        
        // Check for peak in the middle elements
        if (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }
    
    return -1; // Return -1 if no peak is found
}

int main() {
    int n;
    
    // Read size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find and print the first peak element
    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);
    
    return 0;
}