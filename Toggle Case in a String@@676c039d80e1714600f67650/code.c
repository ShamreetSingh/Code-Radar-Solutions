#include <stdio.h>
void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}
int main() {
    char str[100]; 
    printf("Input: ");
    fgets(str, sizeof(str), stdin);
    toggleCase(str);
    printf("%s", str);
    return 0;
}