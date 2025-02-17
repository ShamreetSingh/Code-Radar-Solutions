#include <stdio.h>
int main(){
    int x,i,Prime=1;
    scanf("%d",&x);
    if(x<2) Prime=0;
    for (i=2;i<x;i++){
        if(x%i==0){
            Prime=0;
            break;
        }
    }
    if(Prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}