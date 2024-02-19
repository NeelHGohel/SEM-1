//Count number of elements divisible by 3 in array.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],i,x=0;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
		{
			x++;
		}
	}
	printf("Number of element in a[%d]=%d",i,x);
}
