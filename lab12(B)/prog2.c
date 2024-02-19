//Estimate the value of the mathematical constant e.
#include<stdio.h>
void main()
{
	float fact=1,i,j,sum=1,n;
	printf("Enter n=");
	scanf("%f",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+(1/fact);
	}
	printf("%.2f",sum);
}

