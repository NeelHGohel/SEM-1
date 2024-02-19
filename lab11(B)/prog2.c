//Count frequency of digits in an integer.
#include<stdio.h>
void main()            
{
	int n,rem,i;
	printf("Enter number");
	scanf("%d",&n);
	int arr[10]={0};
	while(n>0)
	{
		rem=n%10;
		arr[rem]++;
		n/=10;
	}
	for(i=0;i<10;i++)
	{
		printf("frequency of %d=%d\n",i,arr[i]);
	}
}
