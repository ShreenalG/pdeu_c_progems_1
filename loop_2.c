#include<stdio.h>
void main()
{
    int i,j,k;


    printf("First 10 odd No.(with for loop) : ");
    for(i=1;i<20;i=i+2)
        printf("\n%d",i);


    printf("\nFirst Ten odd No.(with  do while loop) : ");
    j=1;
    do
    {
        printf("\n %d ",j);
        j=j+2;
    }while(j<20);


    printf("\nFirst Ten odd No.(with while loop) : ");
    k=1;
    while(k<20)
    {
        printf("\n %d ",k);
        k=k+2;
    }
}
