#include<stdio.h>
void main()
{
    int i,j;
    for(i=1,j=5;i<6&&j>0;i++,j--)
    {
        printf("%d%d\n",i,j);
    }
}