//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter n=");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
   }
   printf("Normal order\n");
   for(i=0;i<n;i++)
   {
   	  printf("%d",arr[i]);
   }
   printf("\nreverse order\n");
   for(i=n-1;i>=0;i--)
   {
   	  printf("%d",arr[i]);
   }
}
