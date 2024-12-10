#include<stdio.h>
int main()
{
   int val=0;
    printf("enter the number");
    scanf("%d",&val);
    if(val%2 == 0)
    {
        printf("it is a even number");  
    }else{
        printf("it is not a even number");
    }
    return 0;
}