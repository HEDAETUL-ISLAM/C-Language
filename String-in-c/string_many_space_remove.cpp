#include<stdio.h>
#include<string.h>
int main()
{
	char input[100],output[100],c;
	int i=0,j=0;
	
	printf("enter the string: ");
	gets(input);
	
	for(i=0;i<strlen(input);i++){
		if(input[i]==' ' && input[i+1]!=' ')
			output[j++]=input[i];
		else if(input[i]!=' ')
			output[j++]=input[i];
	}
	output[j]=' ';
	printf("\noutput string is\n");
	puts(output);
}
