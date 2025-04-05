#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], freq[100001] = {0};
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    
    int maxFreq = 0, minElement = 100001;
    
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < minElement)) {
            maxFreq = freq[arr[i]];
            minElement = arr[i];
        }
    }
    
    printf("%d\n", minElement);
    
    return 0;
}

