#include<stdio.h>
void main()
{
    int l,b;
    printf("Enter length : ");
    scanf("%d",&l);

    printf("Enter Breadth : ");
    scanf("%d",&b);

    printf("Perimeter is %d ",2*(l+b));
    printf("\nArea is %d ",l*b);
}