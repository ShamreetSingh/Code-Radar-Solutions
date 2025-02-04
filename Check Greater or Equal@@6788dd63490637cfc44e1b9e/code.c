#include <stdio.h>
int main() {
int x,y;
scanf("%d %d",&x,&y);
if(x>=y || y>=x){
    printf("Yes");
}
else
    {printf("No");}
   return 0;
}