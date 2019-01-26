#include<stdio.h>
int main()
{
	char str[500],c;
	int i,count=0;
	
	printf("enter a string: ");
	gets(str);
	
	printf("enter a character: ");
	scanf("%c",&c);
	
	for(i=0;str[i]!='\0';i++){
		if(c == str[i]){
			++count;
		}
	}
	printf("%c of %d: ",c,count);
}
