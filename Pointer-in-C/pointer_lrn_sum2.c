#include<stdio.h>
int main()
{
	char *str = "bangladesh";
	
	printf("%c, %c, %c, %c, \n",*str,*(str+1),*(str+2),*(str+3));
	printf("%c, %c, %c, %c, \n",*str,*str+1,*str+2,*str+3);
	return 0;
}
