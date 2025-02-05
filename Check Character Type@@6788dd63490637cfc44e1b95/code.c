#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x)
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("Vowel");
    }
    else if(x>='a' && x<='z' || x>='A' && x<='Z'){
        printf("Consonant");
    }
    else if(x>='0' && x<='9'){
        printf("Digit");
    }
    else{printf("Special Character");}
    return 0;
}