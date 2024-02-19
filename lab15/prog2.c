//Count total number of negative elements in array.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],i,cn=0;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cn++;
		}
	}
	printf("No of Negative Element in a[%d]=%d",n,cn);
}
