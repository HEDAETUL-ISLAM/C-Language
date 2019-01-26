#include<stdio.h>
#include<string.h>



void string_compare(char a[] , char b[])


{
	int i,j;
	scanf("%d",&i);
	for(i=0;a[i] != '\0' && b[i] != '\0';i++){
		if(a[i]<b[i]){
			printf("-1");
		}
		if(a[i]>b[i]){
			printf("1");
		}
	}
	if(strlen(a) == strlen(b)){
		printf("0");
	}
	if(strint_length(a) < strlen(b)){
		printf("-1");
	}
	if(strint_length(a) > strlen(b)){
		printf("1");
	}
}
int main()
{
	char str []="bangladesh";
	char str2 [] = "india";
	string_compare(str ,str2);
	
}
