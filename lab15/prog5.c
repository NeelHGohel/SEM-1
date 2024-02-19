//Input a string in character array and print string and length of string.
#include<stdio.h>
void main()
{
	char s1[10];
	printf("Enter string-1");
	gets(s1);
	int i,l=0;
	
	for(i=0;s1[i]!='\0';i++)
	{
		l++;
	}
	printf("%s",s1);
	printf("\nLength of string=%d",l);
}
