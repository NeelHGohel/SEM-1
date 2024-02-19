//Count simple interest using function.
#include<stdio.h>
int simple(int p,int r,int n);
void main()
{
	float p,r,n;
	printf("Enter value of p:");
	scanf("%f",&p);
	printf("Enter value of r:");
	scanf("%f",&r);
	printf("Enter value of n:");
	scanf("%f",&n);
	float result=simple(p,r,n);
	printf("%.2f",result);		
}
int simple(int p,int r,int n)
{
	int s;
	s=(p*r*n)/100;
	return s;
}
