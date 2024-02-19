/*
* * * * *
 * * * *
  * * *
   * *
   *
*/
#include<stdio.h>
void main()
{
	int i,j,n,k=1;
	printf("Enter n=");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
 
