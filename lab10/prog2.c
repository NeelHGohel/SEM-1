//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
void main()
{
	int n,sum=0,count=0;
	float avg;
	printf("Enetr 0 for stop the program");
	while(1)
	{
		printf("\nEnter n=");
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		sum=sum+n;
		count++;
		printf("sum is=%d",sum);
	}
	avg=sum/count;
	printf("%.2f",avg);
}
