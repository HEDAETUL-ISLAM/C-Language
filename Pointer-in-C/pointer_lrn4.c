#include<stdio.h>
int main()
{
	int x=10;
	int *p;
	printf("value of x %d\n",x);
	
	p=&x;
	*p=20;
	printf("value of x %d\n",x);
	
	x=15;
	printf("value of x %d\n",x);
	printf("value stored at location %u is %d\n",p,*p);
	printf("address of x %u\n",&x);
	printf("value of p %u\n",p);
	return 0;
}
