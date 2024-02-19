//Store n elements in an array and print the elements using pointer.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter array[%d]",i);
		scanf("%d",&a[i]);
	}
	int *ptr;
	for(i=0;i<n;i++)
	{
		ptr=&a[i];
		printf("%d\n",*ptr);
	}
}
