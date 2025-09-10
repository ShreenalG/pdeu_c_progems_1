#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter tempurature in fahrenhiet : ");
    scanf("%f",&f);

    c=5.0/9.0*(f-32);
    printf("Tempurature in celius is %.2f ",c);
}