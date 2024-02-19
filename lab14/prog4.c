//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter no of array elements:");
	scanf("%d",&n);
	int a[n];
	int i,max,min,sum=0;
	float avg=0;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
		if(i==0){
			min=a[0];
	        max=a[0];
		}
		sum=sum+a[i];
		
		if(a[i]>max)
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	avg=sum/n;
	printf("max value=%d",max);
	printf("\nmin value=%d",min);
	printf("\nSum=%d",sum);
	printf("\navg=%.2f",avg);
}
	
