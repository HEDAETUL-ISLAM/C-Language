#include<stdio.h>
#include<string.h>

struct nametype{
	char first[20];
	char last[20];
};
struct studenttype{
	int id;
	struct nametype name;
};
int main ()
{
	int i,n=2;
	struct studenttype student[5];

	for(i=0;i<n;i++){
		printf("enter id %d: ",i+1);
		scanf("%d",&student[i].id);
		printf("enter first name %d: ",i+1);
		scanf("%s",student[i].name.first);
		printf("enter last name %d: ",i+1);
		scanf("%s",student[i].name.last);
		printf("\n");
	}
	printf("output: \n\n");
	for(i=0;i<n;i++){
		printf("id: %d\n",student[i].id);
		printf("name: %s %s\n",student[i].name.first,student[i].name.last);
	}
	return 0;
}
