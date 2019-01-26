#include<stdio.h>
#include<string.h>
int main()

{
	char country[]="BANGLADESH";
	int i,length;
	printf("%s\n",country);
	
	length=strlen(country);
	for(i=0;i<length;i++){
		if(country[i]>=65 && country[i]<=90)
		country[i]='a'+(country[i]-'A');
	}
	printf("%s\n",country);
}
