//Count numbers higher than the average of an array.
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n],sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
		printf("Enter arr[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
}
