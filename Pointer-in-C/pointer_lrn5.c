#include<stdio.h>
int main()
{
	int x=10,y;
	int *p,*q;
	
	p=&x;
	q=&y;
	y=*p;
	*p=15;
	*q=20;
	
	printf("value x %d\n",x);
	printf("value y %d\n",y);
	printf("value *p %p\n",*p);
	printf("value *q %p\n",*q);
	return 0;
}
