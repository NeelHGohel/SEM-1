#include<stdio.h>
void main(){
	int sum=0,i=1,n;
	printf("Enter n=");
	scanf("%d",&n);
while(i<=n){
	if(i%2==0){
		sum=sum-i;
	}
	else{
		sum=sum+i;
	}
	i++;
}
    	printf("%d",sum);
}
