#include<stdio.h>
void main()
{
      float x,y;
      printf("Enter first numbers : \n");
      scanf("%f",&x);

      printf("Enter second numbers : \n");
      scanf("%f",&y);

      if(y==0)
      printf("divisionbyzeroERROR \n");
      else
      printf("%.2f / %.2f = %.2f",x,y,x/y);
}