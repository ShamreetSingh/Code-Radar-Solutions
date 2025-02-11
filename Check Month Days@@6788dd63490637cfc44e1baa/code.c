#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x<1 || x>12)
    printf("Invalid month");
    else if (x==2){
        printf("28");
    }
    else if(x==4 || x==6 || x==9 || x==11){
        printf("30");
    }
    else{
        printf("31");
    }

    return 0;
}