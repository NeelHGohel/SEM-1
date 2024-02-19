//Calculate x raise to y without using power function. 
#include<stdio.h>
void main()
{
	int n,i,x,y;
	printf("Enter x=");
	scanf("%d",&x);
	printf("Enter y=");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		n=x*x;
	}
	printf("%d^%d is= %d",x,y,n);	
}
