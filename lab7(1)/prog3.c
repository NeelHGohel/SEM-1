//c-1 Check for equality of two numbers without using arithmetic or comparison operator.
#include<stdio.h>
void main(){
	int a,b,ans;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	ans=a^b;
	switch(ans){
		case 0:
			printf("%d and %d are equal",a,b);
			break;
		default:
		    printf("%d and %d are not equal",a,b);
            break;
	}
}
