//Swap two numbers using call by value and call by reference.
#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
