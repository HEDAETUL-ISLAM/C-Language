#include<stdio.h>
int main()
{
	char name[25];
	
	printf("ehter your full name: ");
	scanf("%[^\n]s",name);
//	gets (name);
	printf("\nhello! %s\n",name);
	return 0;
}
