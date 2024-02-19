//Add two numbers using function.
#include<stdio.h>
int add(int a,int b);
void main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	int result=add(a,b);
	printf("%d",result);
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
