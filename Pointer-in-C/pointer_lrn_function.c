#include<stdio.h>
int add(int n1,int n2);
int sum(int n1,int n2);
int main()
{
	int (*fnc)(int,int);
	int n1=10,n2=5;
	fnc=&add;
	printf("result %d\n",fnc(n1,n2));
	fnc=&sum;
	printf("result %d\n",fnc(n1,n2));
	return 0;
}
int add(int n1,int n2)
{
	return n1+n2;
}
int sum(int n1,int n2)
{
	return n1-n2;
}

