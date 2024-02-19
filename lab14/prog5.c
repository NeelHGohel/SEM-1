//Read five person height and weight and count the number of person having height greater than 170 and 
//weight less than 50.
#include<stdio.h>
void main()
{
	int i,count;
	float h[5],w[5];
	for(i=0;i<5;i++)
	{
		printf("Enter weight");
		scanf("%f",&w[i]);
		printf("Enter height");
		scanf("%f",&h[i]);
	}
	for(i=0;i<5;i++)
	{
		if(h[i]>170 && w[i]<50)
		{
			count++;
		}
	}
	printf("%d",count);
}
