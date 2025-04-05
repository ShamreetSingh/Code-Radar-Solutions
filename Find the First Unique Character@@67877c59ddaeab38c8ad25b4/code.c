#include <stdio.h>
#include <string.h>
#define MAX 256 
char firstUniqueChar(char *str) {
    int count[MAX] = {0}; 
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        count[str[i]]++;
    }
    for (int i = 0; i < length; i++) {
        if (count[str[i]] == 1) {
            return str[i]; 
        }
    }
    return '-'; 
}
int main() {
    char input[100];
    scanf("%99s", input); 
    char result = firstUniqueChar(input);
    printf("%c\n", result); 
    return 0;
}