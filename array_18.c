#include<stdio.h>
void main()
{
    int i,n,a[100],x,pos;

    printf("Enter number of elements u want to enter : ");
    scanf("%d",&x);

    printf("Enter an array of %d elements : ",x);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

    printf("Enter number u want to delete : ");
    scanf("%d",&n);

     for(i=0;i<x;i++)
        if(a[i]==n)
        {
            pos=i;
            break;
        }

        for(i=pos;i<x;i++)
        a[i]=a[i+1];

    printf("Array after insertion : ");
    for(i=0;i<x-1;i++)
        printf("%d ",a[i]);
}


