//Check whether the given number is Aramstrong or not.
#include<stdio.h>
#include<math.h>
void main()
{
	int n,a,b=0,c,temp,temp1,sum=0,d;
	printf("Enter n=");
	scanf("%d",&n);
    temp=n;
    temp1=n;
	while(n!=0)
	{		
	    d=(n%10);
		sum=sum+1;
	    n=n/10;
	}
	while(temp!=0)
	{
		a=temp%10;
		c=pow(a,sum);
		b=b+c;
		temp=temp/10;		
	}
	if(b==temp1)
	{
		printf("Number is Aremstrong");
	}
	else{
		printf("number is not Aremstrong");
	}		
}
