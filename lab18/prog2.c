//Find maximum and minimum between two numbers using function.
#include<stdio.h>
int gr(int a,int b);
void main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	int result=gr(a,b);
	if(result==0)
	{
		printf("%d number is largest",a);
	}
	else
	{
		printf("%d number is largest",b);
	}
}
int gr(int a,int b)
{
	if(a>b)
	{
		return 0;
	}
	else{
		return 1;
	}
}
