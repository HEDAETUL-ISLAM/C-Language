#include<stdio.h>
#include<string.h>
int main()
{
	struct student{
		int id;
		char name[40];
	};
	struct student one;
	one.id=1;
	strcpy(one.name,"hedaetul islam");
	printf("id: %d\n",one.id);
	printf("name: %s\n",one.name);
	return 0;
}
