#include<stdio.h>
void main()
{
    int i,j,temp,a[5],b[5];

    printf("Enter an array of 5 elements : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

     for(i=0,j=4;j>=0,i<5;j--,i++)
     {
         b[i]=a[j];
     }
     printf("Revered array : ");
    for(i=0;i<5;i++)
        printf("%d\t",b[i]);
}



