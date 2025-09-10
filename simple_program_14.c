#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter tempurature in celius : ");
    scanf("%f",&c);

    f=(9.0/5.0*c)+32.0;
    printf("Tempurature in fahrenhiet is %.2f ",f);
}