#include <stdio.h>
#include <string.h>

int are_anagrams(char *str1, char *str2) {
    int freq[256] = {0};  

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (are_anagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
