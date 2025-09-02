#include<stdio.h>
void main()
{
    int i,j,a[100],large,small;


    printf("Enter 100 values : ");
    for(i=0;i<100;i++)
        scanf("%d",&a[i]);

    large=a[0];
    small=a[0];

    for(i=0;i<100;i++)
    {

        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }

    printf("Largest : %d \nsmallest : %d",large,small);


}

