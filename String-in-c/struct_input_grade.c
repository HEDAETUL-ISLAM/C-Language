#include<stdio.h>
#include<string.h>

typedef struct{
	char first[20];
	char last[20];
}nametype;

typedef struct{
	int id;
	int marks;
	nametype name;
	char grade[100];
}studenttype;

void calculate_grade(studenttype* s,int marks)
{
	if(marks>=80){
		strcpy(s->grade,"A+");
	}
	else if(marks>=70){
		strcpy(s->grade,"B");
		
	}else if(marks>=60){
		strcpy(s->grade,"C");
		
	}else if(marks>=50){
		strcpy(s->grade,"D");
		
	}else if(marks>=40){
		strcpy(s->grade,"E");
		
	}else{
		strcpy(s->grade,"F");
	}
}

int main()
{
	studenttype student[50];
	int i,n;
	printf("enter students number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n\nenter the id %d: ",i+1);
		scanf("%d",&student[i].id);
		printf("enter the first name of student %d: ",i+1);
		scanf("%s",student[i].name.first);
		printf("enter the last name of student %d: ",i+1);
		scanf("%s",student[i].name.last);
		printf("enter marks %d: ",i+1);
		scanf("%d",&student[i].marks);
		printf("\n");
	}
	for(i=0;i<n;i++){
		calculate_grade(&student[i],student[i].marks);
	}
	printf("output: \n\n");
	for(i=0;i<n;i++){
		printf("id: %d\n",student[i].id);
		printf("name: %s %s\n",student[i].name.first,student[i].name.last);
		printf("grade: %s\n",student[i].grade);
	}
	return 0;
}

