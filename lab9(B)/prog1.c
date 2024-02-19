//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main()
{
	char i='a',j='A';
	while(i<='z')
	{
		printf("\n%c",i);
		i++;
	}
	while(j<='Z')
	{
		printf("\n%c",j);
		j++;
	}
}
