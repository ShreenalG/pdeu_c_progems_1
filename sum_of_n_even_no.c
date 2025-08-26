#include<stdio.h>
void main()
{
    int i,n,sum=0;


    printf("Enter value till you want sum of even no. : ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("sum of first n even no. = %d",sum);
}
