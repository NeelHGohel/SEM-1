#include<stdio.h>
void main(){
	int N;
	printf("Enter the value of N:");
	scanf("%d",&N);
	if(N%2==0){
		printf("%d is even",N);
	}
	else{
		printf("%d is odd",N);
	}
}
