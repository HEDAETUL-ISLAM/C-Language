#include<stdio.h>
void twice_array(int arg[], int length)
{
	int n;
	for( n=0;n<length;n++)
	arg[n] *=2;
}
void print_array(int arg[], int length)
{
	int n;
	for( n=0;n<length;n++)
	printf("%d ",arg [n]);
	printf("\n");
}
void main()
{
	int first_array[3]={5,10,15};
	int second_array[]={2,4,6,8,10};
	twice_array(first_array,3);
	print_array(first_array,3);
	print_array(second_array,5);
}
