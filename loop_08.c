#include<stdio.h>
void main()
{
    int i,n,sum=0;


    printf("Enter value for n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+(i*2+1);
    }
    printf("sum of first n odd no. = %d",sum);
}

