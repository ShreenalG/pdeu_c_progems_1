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

    if(avg>=70&&sub1>34&&sub2>34&&sub3>34)
        printf(" Distinction class ");
    else if(avg>=60&&sub1>34&&sub2>34&&sub3>34)
        printf(" First class ");
    else if(avg>=50&&sub1>34&&sub2>34&&sub3>34)
        printf(" Second class ");
    else if(avg>=35&&sub1>34&&sub2>34&&sub3>34)
        printf(" Third class ");
    else
        printf(" Fail ");
}
