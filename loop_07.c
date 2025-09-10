#include<stdio.h>
void main()
{
    int i,n,sum=0;


    printf("Enter value for n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first n no. = %d",sum);
}

