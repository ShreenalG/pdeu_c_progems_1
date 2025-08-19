#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three Sides of Triangle : ");
    scanf("%d %d %d",&a,&b,&c);


    if(a+b>c&&a+c>b&&b+c>a)
        printf("triangle valid ");
    else
        printf("invalid triangle");

}
