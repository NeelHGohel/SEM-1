//Print 1 to n using while loop
#include<stdio.h>
void main()
    {
	int n,i=1;
	printf("Enter value of n:");
	scanf("%d",&n);
	
    while(i<=n)
    {
    	printf("%d\n",i);
    	i++;
    }
}
