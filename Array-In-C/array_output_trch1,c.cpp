#include<stdio.h>
int main()
{	
int i,j,s=1; 
int a[3][2]={15,2,12,32,12,1};
for(i=0,j=0;i<3;i++)
s=s+a[i][j];
printf("%d \n", s);
}

