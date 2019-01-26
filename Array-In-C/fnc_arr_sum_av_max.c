#include<stdio.h>
int Arraysum(int arr[],int n);
int Arrayavg(int arr[],int n);
int Arraymax(int arr[],int n);





int main()
{
	int n,arr[100],sum,avg,max;
	int i;
	printf("enter the elements number: ");
	scanf("%d",&n);
	printf("enter the elements: ");

	for(i=0;i<n;i++)
        {
		scanf("%d",&arr[i]);
	    }
    sum = Arraysum(arr,n);
	printf("the sum is: %d\n",sum);

	avg = Arrayavg(arr,n);
	printf("the average is: %d\n",avg);

	max = Arraymax(arr,n);
	printf("the maximum number is : %d",max);
	return 0;
}
int Arraysum(int arr[],int n)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		sum  = sum+arr[i];
	}
	return sum;
}
int Arrayavg(int arr[],int n)
{
	int sum=Arraysum(arr,n),avg;
	avg = sum/n;
	return avg;
}
int Arraymax(int arr[],int n)
{
	int max;
	int i;
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
		max=arr[i];
		}
	}
	return max;
}

