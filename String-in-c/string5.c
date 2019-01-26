#include<stdio.h>
int string_length(char str[])
{
	int i;
	for(i=0;str[i]!=NULL;i++){
		return i;
	}
}
int main()

{
	char ara[100];
	while(NULL != gets(ara)){
		printf("%s\n",ara);
	}
	return 0;
}
