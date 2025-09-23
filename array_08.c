#include<stdio.h>
void main()
{
    int i,j,a[5],b[10];
    printf("Enter 5 values : ");

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0,j=0;i<5;i++,j+=2)
    {
        b[j]=a[i];
    }


     for(i=0;i<10;i++)
     printf("\n%d",b[i]);
}
