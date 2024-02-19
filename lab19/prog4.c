//Find a character from given string.
#include<stdio.h>
void main()
{
	char s1[10],n;
	printf("Enter string-1");
	gets(s1);
	printf("Enter char element");
	scanf("%c",&n);
	int i;
	for(i=0;i<10;i++)
	{
		if(s1[i]==n)
		{
			printf("Element %c fount at s1[%d]",n,i);
			return;
		}
	}
	printf("Element %c is not found",n);
}
