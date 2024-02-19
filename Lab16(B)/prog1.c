//Print Transpose of a matrix.
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter no of rows:");
	scanf("%d",&x);
	printf("Enter no. of column");
	scanf("%d",&y);
	int a[x][y];
	int i,j;
	for(i=0;i<x;i++)
	{
	    for(j=0;j<y;j++)
	    {
	    	printf("Enter a no.in a[%d][%d]:",i,j);
	    	scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
