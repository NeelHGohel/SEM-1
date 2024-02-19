//Pass an array in function to print array elements.
#include<stdio.h>
void arr(int a[10]);
void main()
{
	int a[10],i;
	for(i=0;i<=10;i++)
	{
		printf("%d\n",(a[i]));
	}
void arr(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter element in a[%d]",i);
		scanf("%d",&a[i]);
	}
}
}
