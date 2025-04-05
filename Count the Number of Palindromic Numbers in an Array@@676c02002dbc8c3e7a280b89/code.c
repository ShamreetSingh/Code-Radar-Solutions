#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reversed = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}
