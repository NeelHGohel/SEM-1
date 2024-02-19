#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(n|10){
		printf("%d is odd",n);
	}
	else{
		printf("%d is even",n);
	}
	
}
