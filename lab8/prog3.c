//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the value of i:");
	scanf("%d",&i);
    printf("Enter the value of n:");
	scanf("%d",&n);	
	    while(i<n)
	    {
	     	if(i%2==0)
	     	{
	     		printf("%d\n",i);
			}
			i++;
		}
}
