#include<stdio.h>
int main()
{
	int a, *p;
	
	a=10;
	p=&a;
	
	*p=40;
	
	printf("%d\n",a);	
}
