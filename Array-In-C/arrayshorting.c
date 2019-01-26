#include<stdio.h>
int main()
{
	int num,i,j,temp;
	int arr[10];
	
	printf("enter number of elements: ");
	scanf("%d",&num);
	
	printf("enter degits: ");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num-1;i++){
		
		for(j=i+1;j<num;j++){
			
			if(arr[i] > arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("the shorted list is: \n");
	for(i=0;i<num;i++){
		printf("item %d =%d\n\n",i+1,arr[i]);
	}
}
