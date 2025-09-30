#include<stdio.h>
void main()
{
    int i,a[100],x;

    printf("Enter number of elements u want to enter : ");
    scanf("%d",&x);

    printf("Enter an array of %d elements : ",x);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

     for(i=0;i<x-1;i++)
        a[i]=a[i+1];

    printf("Array after insertion : ");
    for(i=0;i<x-1;i++)
        printf("%d ",a[i]);
}

