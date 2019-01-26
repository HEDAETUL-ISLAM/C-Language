#include<stdio.h>
#include<string.h>
int main()
{
	char string1[]="hedaetul";
	char string2[]="bulbul";
	
	int i,j,k;
	i=strcmp (string1,"hedaetul");
	j=strcmp (string1,string2);
	k=strcmp (string1,"hedaetul bulbul");
	printf("%d\n%d\n%d\n",i,j,k);
	return 0;
}
