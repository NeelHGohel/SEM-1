#include<stdio.h>
void main(){
	int a,b,ans;
	char ch;
	printf("Enter the int value:");
	scanf("%d" "%d",&a,&b);
	printf("Enter Operator");
	scanf(" %c",&ch);	
	if(ch=='+'){
		ans=(a+b);
		printf("%d",ans);
	}
	else if(ch=='-'){
		ans=(a-b);
		printf("%d",ans);
	}
	else if(ch=='*'){
		ans=(a*b);
		printf("%d",ans);
	}
	else if(ch=='/'){
		if (b==0){
			printf("invalid operand");
		}
		else{
			ans=(a/b);
		printf("%d",ans);
	}
	}
	else{
		printf("invalid operator");
	}
	
}
