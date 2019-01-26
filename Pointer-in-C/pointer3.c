#include<stdio.h>
int main()
{
	int i=3;
	printf("add i = %u\n",&i);
	printf("vlu i = %d\n",i);
	printf("vlu i = %d\n",*(&i));
	return 0;
}
