#include<stdio.h>
void main()
{
    char c;
    printf("Enter +,-,*,/ for addition,subtraction,multiplication and division respectively : \n");
    scanf("%c",&c);

    float x,y;
    if(c=='+'||c=='-'||c=='*'||c=='/')
    {
    printf("Enter first numbers : \n");
    scanf("%f",&x);

    printf("Enter second numbers : \n");
    scanf("%f",&y);
    }

    if(c=='+')
    printf("%.2f + %.2f = %.2f",x,y,x+y);
    else if(c=='-')
    printf("%.2f - %.2f = %.2f",x,y,x-y);
    else if(c=='*')
    printf("%.2f x %.2f = %.2f",x,y,x*y);
    else if(c=='/')
    {
       if(y==0)
       printf("ERROR : division by zero. \n");
       else  
       printf("%.2f / %.2f = %.2f",x,y,x/y);
    }
    else 
    printf("input incorrect \n");
}    
