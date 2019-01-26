#include<stdio.h>
int plus_ten(int a)
{
	a=a+10;
}
int plus_ten2(int *a)
{
	*a = (*a)+10;
}
int main()
{
	int a;
	a=5;
	plus_ten(a);
	printf("a: %d\n",a);
	plus_ten2(&a);
	printf("a: %d\n",a);
	return 0;
}
