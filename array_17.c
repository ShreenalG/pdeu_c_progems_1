#include<stdio.h>
void main()
{
    int i,n,a[100],x;

    printf("Enter number of elements u want to enter : ");
    scanf("%d",&x);

    printf("Enter an array of %d elements : ",x);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

        a[x]=0;

    printf("Array after insertion : ");
    for(i=0;i<x-1;i++)
        printf("%d ",a[i]);
}

