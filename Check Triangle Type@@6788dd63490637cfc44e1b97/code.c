#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a==b && a!=c || b==c && b!=a){
        printf("Isosceles");
    }
    else {printf("Scalene");}
    return 0;
}