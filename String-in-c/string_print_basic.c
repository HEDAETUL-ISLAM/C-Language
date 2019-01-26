#include<stdio.h>
int main()
{
	char name[]="klinsman";
	char *ptr;
	ptr=name;
	for(;*ptr!='\0';ptr++){
		printf("%c",*ptr);
	}  
	printf("\n");
	return 0;
}
