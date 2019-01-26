#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *marks;
	int i,n;
	
	printf("enter students number: ");
	scanf("%d",&n);
	
	marks=(int *) malloc(sizeof(int) * n);
	if(marks == NULL){
		printf("mmry allocation faield.");
		return 1;
	}
	printf("enter the marks: ");
	for(i=0;i<n;i++){
		scanf("%d",&marks[i]);
	}
	printf("now here u see the numbers: ");
	for(i=0;i<n;i++){
		printf("%d, ",marks[i]);
	}
	free(marks);
	return 0;
}
