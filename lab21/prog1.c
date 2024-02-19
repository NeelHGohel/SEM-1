//Create, open and close a file.
#include<stdio.h>
void main()
{
	FILE *f;
	char ch;
	f=fopen("abc.txt","r");
	if(f)
	{
		printf("file is opened\n");
	}
	else{
		printf("file is not opened\n");
	}
    
	while(ch!=EOF)
	{
		printf("%c",ch);
    	ch=getc(f);
	}
	fclose(f);
}
