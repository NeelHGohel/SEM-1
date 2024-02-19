//Print digits of given number.
#include<stdio.h>
void main()
{
	int n,num,count,temp;
	printf("Enter n=");
	scanf("%d",&n);
	temp=n;
	
	while(n!=0)
	{
		num=n%10;
		n=n/10;
		count++;
	}
	
	printf("In %d number of digit is=%d",temp,count);
}
