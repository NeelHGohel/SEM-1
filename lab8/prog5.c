//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main()
{
	int n,i=1,evencount=0,oddcount=0;
	while(i<=10)
	{
		printf("Enter number=");
		scanf("%d",&n);
		if(n%2==0)
		{
			evencount++;
		}	
		else
		{
			oddcount++;
		}
		i++;
	}	
	    printf("oddcount is=%d\n",oddcount);
	    printf("evencount is=%d\n",evencount);
}
