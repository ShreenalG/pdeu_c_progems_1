#include<stdio.h>
void main()
{
    int i,n;


    printf("Enter value till you want odd no. to be : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
        printf("\n%d",i);
}
