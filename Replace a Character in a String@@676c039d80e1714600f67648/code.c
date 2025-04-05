#include <stdio.h>
#include <string.h>
void replace_char(char *str, char old_char, char new_char) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == old_char) {
            str[i] = new_char;
        }
    }
}
int main() {
    char str[100], old_char, new_char;
    fgets(str, sizeof(str), stdin);
    scanf(" %c\n", &old_char);
    scanf(" %c", &new_char);
    str[strcspn(str, "\n")] = '\0';
    replace_char(str, old_char, new_char);
    printf("%s\n", str);
    return 0;
}
