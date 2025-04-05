#include <stdio.h>
int main() {
    char str[100];
    char charToCount;
    int count = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to count: ");
    scanf(" %c", &charToCount);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToCount) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}