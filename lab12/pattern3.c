/*  1 2 3 4 5
1   5
2   5 4 
3   5 4 3
4   5 4 3 2
5   5 4 3 2 1
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter n=");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
		  printf("%d ",j);
		}
			printf("\n");
	}
}
