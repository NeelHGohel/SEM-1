/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
void main()
{
    int i,j,n,count;
    printf("Enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count++ %2);
            if(j==i && i!=n)
            printf("\n");
        }
        if(i%2==0)        
            count=1;
        else
         count=0;    
    }
}

