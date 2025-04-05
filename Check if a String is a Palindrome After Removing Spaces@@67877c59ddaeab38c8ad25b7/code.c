#include <stdio.h>
#include <string.h>
#include <ctype.h>
void remove_spaces(char *str) {
    char *dest = str; 
    while (*str) {
        if (*str != ' ') {
            *dest++ = *str; 
        }
        str++;
    }
    *dest = '\0'; 
}
int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) { 
            return 0; 
        }
    }
    return 1; 
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin); 
    remove_spaces(str);
    if (is_palindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}