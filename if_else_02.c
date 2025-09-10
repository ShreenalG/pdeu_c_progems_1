#include<stdio.h>
void main()
{
      int x,y,z;
      printf("Enter first numbers : \n");
      scanf("%d",&x);

      printf("Enter second numbers : \n");
      scanf("%d",&y);

      printf("Enter third numbers : \n");
      scanf("%d",&z);

      if(x>y&&x>z)
        printf("\n First number is greatest which is : %d",x);

      else if(y>x&&y>z)
      printf("\n Second number is greatest which is : %d",y);

      else
        printf("\n third number is greatest which is : %d",z);
}
