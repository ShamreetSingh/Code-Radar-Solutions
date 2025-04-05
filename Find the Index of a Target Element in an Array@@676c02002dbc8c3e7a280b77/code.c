#include <stdio.h>

int main() {
    int N, target, index = -1;
    
    scanf("%d", &N);
    
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    

    scanf("%d", &target);
    

    for(int i = 0; i < N; i++) {
        if(arr[i] == target) {
            index = i; 
            break;      
        }
    }
    
    printf("%d\n", index);
    
    return 0;
}