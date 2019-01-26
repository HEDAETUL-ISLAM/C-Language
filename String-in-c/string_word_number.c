#include<stdio.h>
int main()
{
	int i=0,w=0;
	char str[500];
	printf("enter the string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' ' && str[i]!='\t'){
			w++;
			while(str[i]!=' ' && str[i]!='\t'){
				i++;
			}
		}
	}
	printf("word number is: %d",w);
	return 0;
}
