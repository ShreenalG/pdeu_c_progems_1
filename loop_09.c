#include<stdio.h>
void main()
{
    int i,n,sum=0;


    printf("Enter value for n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*2;
    }
    printf("sum of first n even no. = %d",sum);
}

