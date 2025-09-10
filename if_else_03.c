#include<stdio.h>
void main()
{
      float x,y,z;
      printf("Enter Gross Salary: \n");
      scanf("%f",&x);


      if(x>10000)

        printf("\n Net salary = %f",x+x*0.07);

      else if(x>5000&&x<=10000)

      printf("\n Net salary = %f",x+x*0.05);

      else
        printf("\n Net salary = %f",x);
}
