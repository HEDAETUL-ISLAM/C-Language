#include<stdio.h>
int main()
{
	int i=3;
	int *j;
	j=&i;
	printf("address of I is %u\n",&i);
		printf("address of I is %u\n",j);
			printf("address of J is %u\n",&j);


	printf("value of j is %u\n",j);
		printf("value of i is %u\n",i);
			printf("value if i is %d\n", *(&i));
				printf("value of i is %u\n",*j);
	return 0;
}
