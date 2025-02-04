#include <stdio.h>
int main(){ 
    char x,y,z;
    scanf("%c %c %c",&x,&y,&z);
    if(x==R){
        printf("Stop");
    } 
    else if(y==G)
    {
        printf("Go");
    }
    else if(z==Y)
    {printf("Slow Down");}
    else{
        printf("Invalid input");
    }
    return 0;
}


