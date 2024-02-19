//Calculate sum of two numbers using pointer.
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter 1st value:");
	scanf("%d",&a);
	printf("Enter 2nd value:");
	scanf("%d",&b);
	int *i,*j;
	i=&a;
	j=&b;
	int sum=*i+*j;
	printf("sum of %d and %d is =%d",a,b,sum);
}
