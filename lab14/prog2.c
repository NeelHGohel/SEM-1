//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
void main()
{
	int i,n,j,p=0,o=0;
	printf("Enter no of array elements:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		if(arr[j]>=0)
		{
			p++;
		}
		else
		{
			o++;
		}
	}
	printf("Number of positive element=%d",p);
	printf("\nNumber of negative element=%d",o);
}
