#include<stdio.h>
int main()
{
    int num,res;
    printf("enter the num");
    scanf("%d",&num);
    if(num>100 &&num<5000)
    res=num*5;
else if(num>500)
res=num/2;
else if(num<100)
res=res%10;
else
printf("invalid num");
res=res*res;
printf("%d",res);
return 0;
}
