#include<stdio.h>
void main()
{
    int i,n;


    printf("Enter value till you want even no. to be : ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
        printf("\n%d",i);
}
