#include<stdio.h>
void main()
{
    int i,sum=0,mean,a[10];

    printf("Enter any 10 values : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        sum=sum + a[i];
        mean=sum/10;
    printf("sum : %d \nmean : %d",sum,mean);
}
