#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="folks";
	char target[30]="hello";
	strcat(target,source);
	printf("source string = %s\n",source);
	printf("target string = %s\n",target);
	return 0;
}

