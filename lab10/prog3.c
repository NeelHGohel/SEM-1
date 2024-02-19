//Find whether the given number is prime or not.
#include<stdio.h>
void main()
{
	int n,i=1,factor=0;
	printf("Enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			factor++;
		}
		i++;
	}
	if(factor!=2)
	{
		printf("Number is not prime");
	}
	else{
		printf("Number is prime");
	}
}
