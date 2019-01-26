#include<stdio.h>
int main()
{
	int i,count=0,count2=0;
	int arr[10]={10, -2, 9, -4, -6, -7, 12, 14, 19, -20};
	
	for(i=0;i<10;i++){
		if(arr[i]>=0){
			count++;
		}
		else{
			count2++;
		}
	}
	printf("positive %d\n",count);
	printf("negative %d\n",count2);
}
