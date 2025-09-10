#include<stdio.h>
void main()
{
    int a,b,x;
    printf(" Enter First number : ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);

    x=a;
    a=b;
    b=x;

    printf("\n After swapping %d and %d ",a,b);

}
