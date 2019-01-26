#include<stdio.h>
int main()
{
	char s[]="bangladesh";
	char *p="bangladesh";
	p=s;
	printf("name %s\n",p);
	printf("add %p\n",&s);
	
}
