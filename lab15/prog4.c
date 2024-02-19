//Search element in array.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],i,key;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("Enter element to found=");
	scanf("%d",key);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("index=%d",i);
			return;
		}
	}
	printf("Entered element is not found");
}
