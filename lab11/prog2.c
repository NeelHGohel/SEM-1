//Print sum of 1 to n numbers.
#include<stdio.h>
void main()
{
	int n,sum,i;
	printf("Enter n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	printf("sum is=%d",sum);
}
