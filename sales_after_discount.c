#include<stdio.h>
void main()
{
    float gro;
    printf(" Enter gross sales : ");
    scanf("%f",&gro);

    if(gro>=20000)
        printf(" Net sales : %f",gro-gro*0.15);
    else if(gro>=10000&&gro<20000)
        printf(" Net sales : %f",gro-gro*0.1);
    else
        printf(" Net sales : %f",gro-gro*0.05);
}
