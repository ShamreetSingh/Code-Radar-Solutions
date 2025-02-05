#include <stdio.h>
int main() {
       char a,b,c,d,f;
       scanf("%c %c %c %c %c",&a,&b,&c,&d,&f);
       if (a='A')
       {printf("Excellent");}
       else if(b='B'){
        printf("Good");
       }
       else if(c='C'){
        printf("Average");
       }
       else if(d='D'){
        printf("Below Average");
       }
       else{(printf("Fail");)}
    return 0;
}