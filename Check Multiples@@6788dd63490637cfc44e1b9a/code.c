#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(y!=0 && x%y==0)
    {printf("Yes\n");}  
    else{(printf("No\n");)}  
    return 0;
}