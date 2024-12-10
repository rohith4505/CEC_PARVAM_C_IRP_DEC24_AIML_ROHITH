#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=29;
    printf("berfore swapping a=%d,b=%d \n",x,y);
    swap(&x,&y);
    printf("after swapping a=%d,b=%d",x,y);
    return 0;
}