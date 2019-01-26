#include<stdio.h>
void xstrcopy(char *t,char *s);
int main()
{
	char source[]="hedaetul";
	char target[20];
	xstrcpy(target,source);
	printf("source string %s\n",source);
	printf("target string %s\n",target);
	return 0;
}
void xstrcopy(char *t,char *s)
{
	while(*s !='\0'){
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}
