#include<stdio.h>
void main()
{
    int i,n,a[100],x;

    printf("Enter number of elements u want to enter : ");
    scanf("%d",&x);

    printf("Enter an array of %d elements : ",x);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

    printf("Enter number to be inserted : ");
    scanf("%d",&n);

    for(i=x;i>0;i--)
        a[i]=a[i-1];
    a[0]=n;

    printf("Array after insertion : ");
    for(i=0;i<=x;i++)
        printf("%d ",a[i]);
}
