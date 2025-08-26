#include<stdio.h>
void main()
{
    int i,n,fac=1;


    printf("Enter number you want factorial be : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("factorial = %d",fac);
}
