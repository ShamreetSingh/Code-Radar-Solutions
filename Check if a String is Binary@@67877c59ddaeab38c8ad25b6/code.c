#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; 
    int isBinary = 1; 
    printf("Input: ");
    scanf("%s", str); 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') { 
            isBinary = 0; 
            break; 
        }
    }
    if (isBinary) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}