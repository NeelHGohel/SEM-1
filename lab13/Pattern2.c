/*
12345
1234
123
12
1
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter n=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
