#include<stdio.h>
void main()
{
    float sub1,sub2,sub3,avg,total;

    printf(" Enter marks in maths : ");
    scanf("%f",&sub1);

    printf(" Enter marks in physics : ");
    scanf("%f",&sub2);

    printf(" Enter marks in chemistry : ");
    scanf("%f",&sub3);

    total=sub1+sub2+sub3;
    avg=total/3.0;

    printf(" \n Total marks obtained = %f",total);
    printf(" \n Avg marks = %f",avg);
}
