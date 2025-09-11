#include<stdio.h>
void main()
{
    int n,temp,rem;

    printf("Enter a number : ");
    scanf("%d",&n);

    temp=n;

    while(temp>9)
    {
        rem=temp%10;
        printf("%d,",rem);
        temp=temp/10;
    }
    rem=temp%10;
    printf("%d",rem);
}
