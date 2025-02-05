#include <stdio.h>
int main(){ 
    char x,y,z;
    scanf("%c",&x);
    if(x=='R'){
        printf("Stop");
    } 
    else if(x=='G')
    {
        printf("Go");
    }
    else if(x=='Y')
    {printf("Slow Down");}
    else{
        printf("Invalid input");
    }
    return 0;
}


