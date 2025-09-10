#include<stdio.h>
void main()
{
    int i,j,a[200],c1=0,c2=0,c3=0;


    printf("Enter 200 values : ");
    for(i=0;i<200;i++)
        scanf("%d",&a[i]);


    for(i=0;i<200;i++)
    {

        if(a[i]>0)
            c1++;
        if(a[i]<0)
            c2++;
        if(a[i]==0)
            c3++;
    }

    printf("+VE : %d \n-VE : %d \nzeros : %d",c1,c2,c3);


}


