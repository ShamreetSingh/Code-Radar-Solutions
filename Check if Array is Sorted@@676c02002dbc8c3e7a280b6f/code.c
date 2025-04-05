#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    
    int arr[N];
    printf("Enter %d space-separated integers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int sorted = 1; 
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = 0; 
            break;
        }
    }

    if (sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}