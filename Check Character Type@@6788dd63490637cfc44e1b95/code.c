#include <stdio.h>
int main() {
    char x;
    if(x=='a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U')
    {
        printf("Vowel");
    }
    else if(x>='a' && x<='z' || x>='A' && x<='Z'){
        printf("Consonant");
    }
    else if(x>=0 && x<=9){
        printf("Digit");
    }
    else{printf("Special Character");}
    return 0;
}