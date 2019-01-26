#include<stdio.h>
int main()
{
	int arr[]={12,10,9,3,1,3,8,13,17,11};
	int i;
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			printf("R%d even\n",i+1);
				
		}
	}
	for(i=0;i<10;i++){
		if(arr[i]%2!=0){
			printf("R%d odd\n",i+1);
		}
	}
}
