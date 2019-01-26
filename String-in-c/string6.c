#include<stdio.h>
#include<string.h>
int string_length(char str[])
{
	int i;
	for(i=0;str[i] !='\0';i++)
	return i;
}
int main()
{
	char str[30];
	int i;
	while('\0'!= gets(str)){
		printf("%s\n",str);
	}
	return 0;
}
