#include<stdio.h>
int main()
{
	int r,c,arr[50][50],i,j,temp,max=0,sum=0;
	
	printf("enter the row size: ");
	scanf("%d",&r);
	printf("enter the collumn size: ");
	scanf("%d",&c);
	printf("enter the elements of a matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]>max)
				max=arr[i][j];
		}
		sum=sum+max;
	}
	printf("matrix is: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("the sum is %d",sum);
}
	


