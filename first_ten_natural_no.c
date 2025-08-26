#include<stdio.h>
void main()
{
    int i,j,k;


    printf("First Ten Natural No.(with for loop) : ");
    for(i=1;i<11;i++)
    {
        printf("\n %d ",i);
    }


    printf("\nFirst Ten Natural No.(with  do while loop) : ");
    j=1;
    do
    {
        printf("\n %d ",j);
        j++;
    }while(j<11);


    printf("\nFirst Ten Natural No.(with while loop) : ");
    k=1;
    while(k<11)
    {
        printf("\n %d ",k);
        k++;
    }

}
