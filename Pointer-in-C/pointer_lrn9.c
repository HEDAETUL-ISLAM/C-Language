#include<stdio.h>
int main()
{
	char c='a';
	char *p,**q;
	
	p=&c;
	q=&p;
	**q='b';
	
	printf("value c %c\n",c);
	printf("value c %c\n",*p);
	printf("value c %c\n",**q);
}
