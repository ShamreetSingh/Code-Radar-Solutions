#include <stdio.h>

int main() {
    int N; 
    printf("Enter number of elements: ");
    scanf("%d", &N);
    
    int arr[N]; 
    printf("Enter the elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("%d %d\n", min, max);
    
    return 0; 
}