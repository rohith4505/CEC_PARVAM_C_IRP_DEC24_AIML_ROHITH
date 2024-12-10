#include<stdio.h>
int main()
{
    int arr[10]={34,45,56,89},a1,a2,a3;
    a3=45;
    for(int i=0;i<10;i++)
    {
        arr[i]=i*100;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}