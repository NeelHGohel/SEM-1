//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main()
{                                           //123  123%10=3 123/10=12  12/10=2 2+3=5
	int n,lastdigit,sum;                                                 
	printf("Enter n=");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n/=10;
	}
	sum=lastdigit+n;
	printf("%d",sum);
}
