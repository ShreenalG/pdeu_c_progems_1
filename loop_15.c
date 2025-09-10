#include<stdio.h>
void main()
{
    int i,n,sum=0,mean;

    printf("Enter value of N : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        sum=sum+a[i];

    mean=sum/n;

    printf("sum : %d \nmean : %d",sum,mean);


}
