#include<stdio.h>
void main()
{
    float p,r,n;
    printf("Enter principal amt : ");
    scanf("%f",&p);

    printf("Enter rate of interest : ");
    scanf("%f",&r);

    printf("Enter years for interest : ");
    scanf("%f",&n);


    printf("Interest is %.2f ",p*r*n/100.0);
}