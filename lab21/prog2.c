//Count chars,spaces, tabs and new lines in a file.
#include<stdio.h>
void main()
{
    FILE *f;
    char ch;
    int ln=0,t=0,w=0,c=0;
    f=fopen("abc.txt","r");
    ch=getc(f);
    while(ch!=EOF)
    {
        if(ch=='\n')
        ln++;
        else if(ch=='\t')
        t++;
        else if(ch==' ')
        w++;
        else
        c++;
        ch=getc(f);
    }
    fclose(f);
    printf("lines=%d\n Tabs=%d\n Words=%d\n charecte=%d\n",ln,t,w,c);
}