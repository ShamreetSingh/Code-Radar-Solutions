#include <stdio.h>

void concatenate(char *str1, char *str2, char *result) {
    int i = 0, j = 0;
    
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    concatenate(str1, str2, result);

    printf("%s\n", result);

    return 0;
}
