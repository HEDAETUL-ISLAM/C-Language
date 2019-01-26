#include<stdio.h>
int main()
{
	int arr[]={12,10,9,3,1,3,8,13,17,11};
	int i,even=0,odd=0;
	
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			even++;
		}
	}
	for(i=0;i<10;i++){
		if(arr[i]%2!=0){
			odd++;
		}
	}
	printf("even %d\n",even);
	printf("odd %d\n",odd);
}
