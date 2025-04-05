#include <stdio.h>
#include <string.h>
int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}
void longestPalindrome(char *str) {
    int maxLength = 1; 
    int start = 0;     
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        
        for (int j = 0; j < len - i; j++) {
            if (isPalindrome(str, i, i + j) && (j + 1 > maxLength)) {
                start = i;
                maxLength = j + 1;
            }
        }
        for (int j = 0; j < len - i - 1; j++) {
            if (isPalindrome(str, i, i + j + 1) && (j + 2 > maxLength)) {
                start = i;
                maxLength = j + 2;
            }
        }
    }


    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[1000]; 
    scanf("%s", str); 
    longestPalindrome(str); 
    return 0;
}