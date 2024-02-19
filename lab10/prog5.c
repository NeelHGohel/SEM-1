//Print given number in reverse order.
#include<stdio.h>
void main()
{
	int n,num;
	printf("Enter n=");
	scanf("%d",&n);
	
	while(n!=0)
	{
		num=n%10;
		printf("%d",num);
		n=n/10;
	}
}
