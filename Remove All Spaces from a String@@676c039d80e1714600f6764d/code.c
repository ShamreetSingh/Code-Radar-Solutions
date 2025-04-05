#include <stdio.h>

void removeSpaces(char str[]) {
    int i, j = 0;
    char result[100]; 
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 
    printf("%s\n", result);
}

int main() {
    char str[100]; 
    fgets(str, sizeof(str), stdin);

    removeSpaces(str); 

    return 0;
}