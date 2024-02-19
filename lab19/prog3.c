//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	printf("Enter string-1");
	gets(s1);
	printf("Enter string-2");
	gets(s2);
	
	printf("%d",strlen(s1));
	printf("\n%d",strlen(s2));
	if(strcmp(s1,s2)==0)
	{
		printf("\nboth string same");
	}
	else{
		printf("\nNot same");
	}
	printf("\n%s",strcat(s1,s2));
	printf("\n%s",strcpy(s1,s2));
	printf("\n%s",strrev(s2));
	printf("\n%s",strlwr(s2));
	printf("\n%s",strupr(s2));
}
