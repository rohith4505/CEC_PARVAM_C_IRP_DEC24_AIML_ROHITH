#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the numbers to sum");
    scanf("%d",&num);
    for(int c=1;c<=num;c++)
{
    sum=sum+c;
}return 0;
}