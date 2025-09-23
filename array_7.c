#include<stdio.h>
void main()
{
    int i,j,a[4][4],b[4][4];
    printf("Enter matrix A 3x3 : ");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);


    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        b[i][j]=a[j][i];

    printf("Matrix c 3x3 : \n");
    for(i=0;i<1;i++)
        for(j=0;j<4;j++)
           printf("%d ",b[i][j]);

           printf("\n");
    for(i=1;i<2;i++)
        for(j=0;j<4;j++)
           printf("%d ",b[i][j]);

           printf("\n");
    for(i=2;i<3;i++)
        for(j=0;j<4;j++)
           printf("%d ",b[i][j]);

           printf("\n");
    for(i=3;i<4;i++)
        for(j=0;j<4;j++)
           printf("%d ",b[i][j]);
}
