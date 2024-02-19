#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if((n|0)>n){
		printf("%d is even",n);
	}
	else{
		printf("%d is odd",n);
	}
}
