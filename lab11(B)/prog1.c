//Print the Fibonacci Series.
//0 1 1 2 3 5 8 13
#include<stdio.h>
void main()
{
	int n1=0,n2=1,i,n,n3;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}

