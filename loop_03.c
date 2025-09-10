#include<stdio.h>
void main()
{
    int i,j,k;


    printf("First 10 odd No.(with for loop) : ");
    for(i=2;i<21;i=i+2)
        printf("\n%d",i);


    printf("\nFirst Ten odd No.(with  do while loop) : ");
    j=2;
    do
    {
        printf("\n %d ",j);
        j=j+2;
    }while(j<21);


    printf("\nFirst Ten odd No.(with while loop) : ");
    k=2;
    while(k<21)
    {
        printf("\n %d ",k);
        k=k+2;
    }
}
