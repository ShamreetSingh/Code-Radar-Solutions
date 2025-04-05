#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000
int main() {
    char str[MAX_LENGTH];
    char shortest[MAX_LENGTH];
    int minLength = MAX_LENGTH;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *token = strtok(str, " ");    
    while (token != NULL) {
        int length = strlen(token);
        
        if (length < minLength) {
            minLength = length;
            strcpy(shortest, token);
        }
        
        token = strtok(NULL, " ");
    }
    printf("%s\n", shortest);
    
    return 0;
}