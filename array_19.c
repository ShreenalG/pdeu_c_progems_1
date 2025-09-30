#include<stdio.h>
void main()
{
    int i,n,a[100],x,pos,flag=0;

    printf("Enter number of elements u want to enter : ");
    scanf("%d",&x);

    printf("Enter an array of %d elements : ",x);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

    printf("Enter number u want to Search : ");
    scanf("%d",&n);

     for(i=0;i<x;i++)
        if(a[i]==n)
        {
            pos=i;
            flag=1;
            break;
        }
    if(flag==1)
        printf("Found at position : %d",pos+1);
    else
        printf("Not Found");
}


