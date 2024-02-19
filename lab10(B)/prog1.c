//Check whether the given number is perfect or not.
#include<stdio.h>
void main()
{
	int n,sum,i;
	printf("Enter n=");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0)
		{
		    sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	{
		printf("%d is a perfect number",n);
	}
	else{
		printf("%d is not a perfect number",n);
	}
}
