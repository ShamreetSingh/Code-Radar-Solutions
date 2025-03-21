#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(char *str) {
    int count = 0, i = 0;
    int inWord = 0;
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }
    return count;
}
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("%d\n", countWords(str));
    return 0;
}
