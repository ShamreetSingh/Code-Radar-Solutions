#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256
char firstNonRepeatedChar(char *str) {
    int count[MAX_CHAR] = {0};  
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '-';  
}

int main() {
    char str[100];  
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    char result = firstNonRepeatedChar(str);
    printf("%c\n", result);
    return 0;
}