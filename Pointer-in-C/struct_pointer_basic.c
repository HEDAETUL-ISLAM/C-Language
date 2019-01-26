#include<stdio.h>
int main()
{
	struct student{
		int id;
		char *name;
	};
	struct student one;
	one.id=1;
	one.name ="hedaetul islam";
	
	printf("id: %d\n",one.id);
	printf("name: %s\n",one.name);
	return 0;
}
