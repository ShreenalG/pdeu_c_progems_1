#include<stdio.h>
void main()
{
    int i,j,a[10],large,small;


    printf("Enter 10 values : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    large=a[0];
    small=a[0];

    for(i=0;i<10;i++)
    {

        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }

    printf("Largest : %d \nsmallest : %d",large,small);


}

