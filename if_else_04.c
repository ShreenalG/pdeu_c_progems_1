#include<stdio.h>
void main()
{
    int n,flag=0;

    printf("Enter any number : ");
    scanf("%d",&n);

        if((n%7)==0)
        flag=1;
        
        if(flag)
            printf(" no. divisible by 7 ");
        else
            printf(" no. not divisible by 7 ");
}