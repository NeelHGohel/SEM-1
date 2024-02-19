/*
    1
   A B
  1 2 3
 C D E F
1 2 3 4 5
*/
#include<stdio.h>
void main()
{
   int i,j,n,k,p=1;
   char ch='A';
   printf("Enter n=");
   scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
        for(j=n;j>i;j--)
        {
                printf(" ");  
        }
        for(k=1;k<=i;k++)
        {
            if (i%2==1)
            {
                printf("%d ",p);
                p++;
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        p=1;
        printf("\n");   
   }
}
