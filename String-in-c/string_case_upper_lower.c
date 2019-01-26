#include<stdio.h>
#include<string.h>
int main()
{
	int i,upper=0,lower=0;
	char str[50];
	
	printf("enter string: ");
	gets(str);
	
	while(str[i]!='\0'){
	if(str[i]>='A' && str[i]<='Z'){
		upper++;
	}
	if(str[i]>='a' && str[i]<='z'){
		lower++;
	}
	i++;
	}
	printf("upper is: %d\n\n",upper);
	printf("lower is: %d\n\n",lower);
	
	for(i=0;i<=strlen(str);i++){
	if(str[i]>='A' && str[i]<='Z'){
		str[i]=str[i]+32;
	}
	else if(str[i]>='a' && str[i]<='z'){
		str[i]=str[i]-32;
	}

	}
	printf("str is: %s",str);
	return 0;

}
