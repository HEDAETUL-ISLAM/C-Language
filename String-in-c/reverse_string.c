#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char string[100], temp;
	
	printf("\nenter the word: ");
	gets(string);
	i=0;
	j=strlen(string)-1;
	while(i<j){
		temp=string[i];
		string[i]=string[j];
		string[j]=temp;
		i++;
		j--;
	}
	printf("\nthe reverse string is: %s\n",string);
	return 0;
}
