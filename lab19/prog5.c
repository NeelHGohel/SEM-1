//Replace a character in given string.
#include<stdio.h>
void main()
{
	char s1[10],n,x;
	int i;
	printf("Enter string:");
	gets(s1);
	printf("Enter element u need:");
	scanf("%c",&n);
	printf("Enter at which place u replace:");
	scanf(" %c",&x);
	for(i=0;i<n;i++)
	{
		if(s1[i]==x)
		{
			s1[i]=n;
		}
	}
	printf("%s",s1);
}
