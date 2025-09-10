#include<stdio.h>
void main()
{
    float gross;
    printf("Enter gross sales : ");
    scanf("%f",&gross);

    
    printf("\nNet sales is %.2f ",gross*0.9);
}