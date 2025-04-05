#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100];
    char subString[100];

    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = 0;

    fgets(subString, sizeof(subString), stdin);
    subString[strcspn(subString, "\n")] = 0;
    if (strstr(mainString, subString) != NULL) {
        printf("Yes\n"); 
    } else {
        printf("No\n"); 
    }

    return 0;
}