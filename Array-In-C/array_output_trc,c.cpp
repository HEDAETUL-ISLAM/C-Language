#include<stdio.h>
int main()
{
int a[2][3]={15,3,10,12,4,8};                                 


int i,j;
for(i=0;i<3;i++)
for(j=0;j<2;j++)
printf("%d", a[j*j][j]);
}

