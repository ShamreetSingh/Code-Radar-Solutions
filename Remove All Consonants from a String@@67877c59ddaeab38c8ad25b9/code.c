#include <stdio.h>
#include <string.h>
#include <ctype.h>
void remove_consonants(const char *input) {
    char output[100]; 
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = tolower(input[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || !isalpha(ch)) {
            output[j++] = input[i]; 
        }
    }
    output[j] = '\0'; 
    printf("%s\n", output); 
}
int main() {
    char input[100]; 
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    remove_consonants(input);
    return 0;
}