#include<stdio.h>
int main()
{
	int sum=0,i,num;
	int arr[10];
	float avg,d;
	
	printf("enter elements: ");
	scanf("%d",&num);
	
	printf("enter numbers: ");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg = sum/num;
	printf("the average number is: %.3f\n\n",avg);
	
	for(i=0;i<num;i++){
		d = arr[i]-avg;
		printf("item = %d d = %.3f\n\n",i+1,d);
	}
}
