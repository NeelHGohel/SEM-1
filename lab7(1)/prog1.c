//Read 3 numbers, multiply largest number from first two numbers to third one using switch
#include<stdio.h>
void main(){
	int a,b,c,max,ans;
	printf("Enter a=");
	scanf("%d",&a);
	printf("\nEnter b=");
	scanf("%d",&b);
	printf("\nEnter c=");
	scanf("%d",&c);
	max=(a>b?a:b);
		switch(max){
		default:
			ans=max*c;
			printf("\n%d",ans);
	}
}
