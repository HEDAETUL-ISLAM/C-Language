#include<stdio.h>
int xstrlen(char *s);
int main()
{
	char arr[]="hedaetul";
	int len1,len2;
	len1=xstrlen(arr);
	len2=xstrlen("hedaetul islam");
	printf("string = %s & length = %d\n",arr,len1);
	printf("string = %s & length = %d\n","hedaetul islam",len2);
	return 0;
}
int xstrlen(char *s)
{
	int length = 0;
	while(*s!='\0')
	{
		length++;
		s++;
	}
	return (length);
}
