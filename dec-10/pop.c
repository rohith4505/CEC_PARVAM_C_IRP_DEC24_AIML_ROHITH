#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char name[100];
    printf("Please Enter your name : \n");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++)
        count++;
    if(count%2==0)
        printf("even");
    else
          printf("odd");
    return 0;
}
