#include<stdio.h>
void main(){
	char ch;
	printf("Enter char value:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z'){
		printf("%c is lowercase alphabet");
	}
	else if(ch>='A' && ch<='Z'){
		printf("%c is uppercase alphabet");
		
	}
	else if(ch>='0' && ch<='9'){
		printf("%c is digit");
	}
	else{
		printf("%c is special operator");
	}
}
