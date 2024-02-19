//Find factorial of a number using function
#include<stdio.h>
int fact(int a);
void main()
{
	int a;
	printf("Enter a no.");
	scanf("%d",&a);
	int result=fact(a);
	printf("%d",result);
}
int fact(int a)
{
	int i,c=1;
	for(i=1;i<=a;i++)
	{
		c=c*i;
	}
	return c;
}
