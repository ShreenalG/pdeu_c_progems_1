#include<stdio.h>
void main()
{
    int i,n,flag=0;


    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=1;
    }
    
    if(flag)
    printf("Not a prime number");
    else
    printf("A prime number");
}
