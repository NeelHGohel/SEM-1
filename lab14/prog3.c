//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main()
{
	int i,n,j,e=0,o=0;
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
		if(arr[j]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("Number of odd element=%d",o);
	printf("\nNumber of even element=%d",e);
}
