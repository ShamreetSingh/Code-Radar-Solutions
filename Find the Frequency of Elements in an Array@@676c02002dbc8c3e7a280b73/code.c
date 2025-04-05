#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    int freq[N]; 
    int visited[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 0; 
        visited[i] = 0; 
    }
    for (int i = 0; i < N; i++) {
        if (visited[i] == 1) {
            continue; 
        }
        int count = 1; 
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }
        freq[i] = count;
        visited[i] = 1; 
    }
    printf("Output:\n");
    for (int i = 0; i < N; i++) {
        if (visited[i] == 1) { 
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}