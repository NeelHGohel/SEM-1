//Create, declare and initialize structure employee.
#include<stdio.h>
struct Emp
{
	char name[30];
	char degree[30];
	int age;
};
void main()
{
	int e;
	struct Emp e1={"pelo","BBA",45};
	struct Emp e2={"bijo","no degree",21};

	printf("%s",e1.name);
	printf("\n%s",e1.degree);
	printf("\n%d",e1.age);
	
	printf("\n%s",e2.name);
	printf("\n%s",e2.degree);
	printf("\n%d",e2.age);
}
