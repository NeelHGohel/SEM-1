//Return the maximum of three floating-point numbers.
#include<stdio.h>
float max(float a,float b,float c);
void main()
{
	float a,b,c;
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	printf("Enter value of c:");
	scanf("%f",&c);
	
	float result=max(a,b,c);
	printf("%0.3f",result);		
}
float max(float a,float b,float c)
{
	float d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	return d;
}
