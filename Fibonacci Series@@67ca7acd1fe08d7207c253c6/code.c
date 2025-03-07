#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1) {
            printf(" ");  // Add space between numbers
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n"); // Print newline at the end
}

int main() {
    int N;
    scanf("%d", &N);  // Read the number of terms
    fibonacci(N);
    return 0;
}
