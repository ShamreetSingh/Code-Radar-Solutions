#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    
    reverseString(str);
    
    printf("%s\n", str);
    
    return 0;
}
