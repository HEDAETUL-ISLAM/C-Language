#include<stdio.h>
int main()
{
	int arr[10];
	int i,num;
	
	printf("enter the size of array: ");
	scanf("%d",&num);
	printf("enter numbers: ");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("the even numbers are: ");
	for(i=0;i<arr[i];i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\nthe odd numbers are: ");
	for(i=0;i<arr[i];i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
