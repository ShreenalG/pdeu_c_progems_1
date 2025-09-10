#include<stdio.h>
void main()
{
    float gross;
    printf("Enter gross salary : ");
    scanf("%f",&gross);

    
    printf("\nNet salary is %.2f ",gross+(gross*0.07));
}