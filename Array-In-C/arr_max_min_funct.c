#include<stdio.h>
int Arrmax(int[],int);
int Arrmin(int[],int);
int main()
{
	int arr[10],n,i,max,min;
	printf("enter the elements number: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max  = Arrmax(arr,n);
	printf("maximum value is : %d\n",max);
	min = Arrmin(arr,n);
	printf("minimum value is : %d\n",min);
	return 0;
}
int Arrmax(int arr[],int n)
{
	int i, 	greatest;
	
	greatest = arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>greatest){
			greatest =arr[i];
		}
	}
	return greatest;
}
int Arrmin(int arr[],int n)
{
	int i,smallest;
	
	smallest = arr[0];
	for(i=1;i<n;i++){
		if(arr[i]<smallest){
			smallest = arr[i];
		}
	}
	return smallest;
}
