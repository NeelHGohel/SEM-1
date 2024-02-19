//Print sum of 1 to n numbers.
#include<stdio.h>
void main()
{
	int sum=0,i=1,n;
	printf("Enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum from 1 to %d is=%d",n,sum);
}

