#include <stdio.h>
#include <string.h>

int isRotation(char* str1, char* str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    char temp[2 * strlen(str1) + 1];
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        return 1;
    }

    return 0;
}

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (isRotation(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}