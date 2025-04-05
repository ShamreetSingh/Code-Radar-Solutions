#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];
    char longestWord[MAX_LEN];
    fgets(str, sizeof(str), stdin);
    char *token = strtok(str, " ");
    strcpy(longestWord, ""); 
    while (token != NULL) {
        if (strlen(token) > strlen(longestWord)) {
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " ");
    }
    size_t len = strlen(longestWord);
    if (len > 0 && longestWord[len - 1] == '\n') {
        longestWord[len - 1] = '\0';
    }
    printf("Output: %s\n", longestWord);
    return 0;
}