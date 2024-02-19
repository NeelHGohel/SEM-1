#include<stdio.h>
void main(){
	int a,b;
	printf("Enter an int value:");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0){		
	printf("%d is even",b);
    }
    else{
    	printf("%d is odd",b);
	}

}
