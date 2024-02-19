//Find factorial of a number using function and recursive function.
#include<stdio.h>
void fact(int n){
    if(n==0)
    return;
	int i,c=1;    
	for(i=1;i<=n;i++)
	{
		c=c*i;
	}
	printf("%d\t",c);
    fact(n-1);
}
void main(){
    int n;
    printf("Enter n=");
    scanf("%d",&n);
    fact(n);
}

