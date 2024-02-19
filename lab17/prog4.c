//Swap value of two numbers using pointer.
#include<stdio.h>
void main()
{
	int a=10,b=90,temp;
	int *ptr;
	ptr=&a;
	int *ptr1;
	ptr1=&b;
	temp=*ptr;
	*ptr=*ptr1;
	*ptr1=temp;
	printf("%d %d",*ptr,*ptr1);
}
