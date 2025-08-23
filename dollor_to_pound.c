#include<stdio.h>
void main()
{
    float x;
    printf("Dollors : ");
    scanf("%f",&x);

    printf("In Pounds : %.2f",x*48.0/70.0);
}