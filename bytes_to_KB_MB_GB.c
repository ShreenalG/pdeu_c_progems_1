#include<stdio.h>
void main()
{
    float x;
    printf("Bytes : ");
    scanf("%f",&x);

    printf("\nIn KB : %f",x/1000);
    printf("\nIn MB : %f",x/1000000);
    printf("\nIn GB : %f",x/1000000000);

}