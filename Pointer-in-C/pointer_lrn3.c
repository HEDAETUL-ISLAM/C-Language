#include<stdio.h>
int main()
{
	int x=10;
	int *p;
	p=&x;
	printf("value of x is %d\n",x);
	*p=20;
	printf("value of x is %d\n",x);
	printf("address of x %p\n",&x);
	printf("vallue of p %p\n",p);
	return 0;
	
}
