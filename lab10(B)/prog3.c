//Check whether the given number is palindrome or not.
#include<stdio.h>
void main()
{
	int n,rem,sum,temp;
	printf("Enter n=");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("Number is palindrome");
	}
	else{
		printf("Number is not palindrome");
	}
}
