#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="hedaetul";
	int len1,len2;
	
	len1=strlen(arr);
	len2=strlen("hedaetul islam");
	printf("string = %s & length = %d\n",arr,len1);
	printf("string = %s & length = %d\n","hedaetul islam",len2);
	return 0;
}
