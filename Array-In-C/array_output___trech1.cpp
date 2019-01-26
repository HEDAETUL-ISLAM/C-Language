#include<stdio.h>
int main()
{
	int a[5]={5,2,15,30,20};
	
	int b[5]={10,4,12,42,20};
	
	int i,j,m;
	
	i=a[1]++;
	j= b[3]--;
	m=a[i++]++;
	
	printf("\n%d %d %d", i,j,m);
}

