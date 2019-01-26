#include<stdio.h>
int main()
{
	int x=10,*p;
	p=&x;
	printf("*p = %d\n",*p);
	printf("value of p is =%p",p);
	return 0;
}
