//Copy all elements of one array to another.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n],b[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];		
	}
	printf("array b\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

