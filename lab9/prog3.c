#include<stdio.h>
void main(){
	int ans=1,i=1,x,y;
	printf("Enter x&y:");
	scanf("%d %d",&x,&y);
	while(i<=y){
	     ans=ans*x;
	     i++;
	}
	printf("%d",ans);
}
