#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three Sides of Triangle : ");
    scanf("%d %d %d",&a,&b,&c);


if((a+b)>c && (a+c)>b && (b+c)>a)
{

    if(a==b&&a==c&&b==c)
        printf("equilateral triangle");
    else if (a==b||a==c||b==c)
        printf("Isosceles triangle");
    else
        printf("scalar triangle");

}
else
    printf("invalid triangle");
}
