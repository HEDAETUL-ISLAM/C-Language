#include<stdio.h>
#include<string.h>
int main()

{
	char country[]="bangladesh";
	int i, length;
	printf("%s ",country);
	length=strlen(country);
	for(i=0;i<length;i++){
		if(country[i]>=97 && country[i]<=122){
			country[i] = 'A' + (country[i]-'a');
		}
	}
	printf(" %s\n",country);
	return 0;
}
