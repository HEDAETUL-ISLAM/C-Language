#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[40];
};
int main() 
{
	struct student one;
	scanf("%d",&one.id);
	scanf("%[^\n]s",one.name);
	
	printf("id: %d\n",one.id);
	printf("name: %s\n",one.name);
	return 0;
}
