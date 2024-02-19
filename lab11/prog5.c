//Find factorial of the given number.
#include<stdio.h>
void main()
{
	int n,i,ans;
	printf("Enter n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		ans=ans*i;
	}
     printf("%d!= %d",n,ans);
}
