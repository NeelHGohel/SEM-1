//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include<stdio.h>
struct student{
	char name[30];
	float percentage;
	int age;
};
void main()
{
	struct student student;
	int i;
	
	for(i=0;i<=5;i++)
	{
		printf("\nEnter name:");
		scanf("%s",student.name);
		printf("\nEnter percentage:");
		scanf("%f",&student.percentage);
		printf("\nEnter age:");
		scanf("%d",&
		student.age);
	}
	for(i=1;i<=5;i++)
	{
		printf("\nStudent name is=%s",student.name);
		printf("\nStudent percentage=%f",student.percentage);
		printf("\nStudent age is=%d",student.age);
	}
}
