//Print value and address of a variable.
#include<stdio.h>
void main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("%d %d",&ptr,*ptr);
}
