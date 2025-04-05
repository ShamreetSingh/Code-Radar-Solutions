#include <stdio.h>
#include <string.h>

char most_frequent_char(char *str) {
    int freq[256] = {0};  
    int max_freq = 0;
    char result = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] > max_freq || 
               (freq[(unsigned char)str[i]] == max_freq && str[i] < result)) {
                max_freq = freq[(unsigned char)str[i]];
                result = str[i];
            }
        }
    }
    return result;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0'; 
    
    printf("%c\n", most_frequent_char(str));

    return 0;
}
