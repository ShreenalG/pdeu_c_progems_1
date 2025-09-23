#include<stdio.h>
void main()
{
    int i,j,a[9],temp,n,b[]={500,200,100,50,20,10,5,2,1};
    printf("Enter a value : ");
    scanf("%d",&n);

    temp=n;
    for(i=0;i<9;i++)
    {
        j=temp/b[i];
        a[i]=j;
        temp=temp%b[i];

    }


     for(i=0;i<9;i++)
        printf("%d notes = %d\n",b[i],a[i]);
}
