//check whether character is an alphabet or not,using conditional operator
#include<stdio.h>
void main(){
	char c;
	printf("Enter a value:");
	scanf("%c",&c);
	
	(c>='A' && c<='Z' || c>='a' && c<='z')?printf("%c is an alphabet",c):printf("%c is not alphabet",c);
}
