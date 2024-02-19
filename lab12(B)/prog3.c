/*Print Pascal triangle.
1
1 1
1 2 1
1 3 3 1                        pending
1 4 6 4 1
*/
#include<stdio.h>
void main()
{
	int i,j,n,t=2;
	printf("Enter n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==j || j==1)
			{
				printf("1");
			}
			else{
				printf(" ");
			}
			if(i+j<=n)
			{
				printf("%d",i);
				//t++;
			}
			}
                printf("\n");
		}

	}

