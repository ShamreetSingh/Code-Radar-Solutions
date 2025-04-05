#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, j;
    scanf("%d", &N); 
    int arr[N];
    int frequency[100] = {0}; 
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
        frequency[arr[i]]++; 
    }

    int max_freq = 0; 
    int result = INT_MAX; 

    for (i = 0; i < 100; i++) { 
        if (frequency[i] > max_freq) {
            max_freq = frequency[i]; 
            result = i; 
        } else if (frequency[i] == max_freq && frequency[i] > 0) {
            result = (i < result) ? i : result;
        }
    }

    printf("%d\n", result); 
    return 0;
}