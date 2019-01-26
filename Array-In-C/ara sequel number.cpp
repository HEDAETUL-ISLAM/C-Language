#include<stdio.h>
int find_max(int ara[],int n);
int main()

{
	int ara[]={30,59,35,56,26,26,26,76,47,4257,276,2457,67};
	int n=13;
	
	int max = find_max(ara,n);
	printf("%d\n",max);
	return 0;
}
int find_max(int ara[],int n)
{
	int max=ara[0];
	int i;
	for(i=1;i<n;i++){
		if (ara[i]>max){
			max=ara[i];
		}
	}
	return max;
}
