#include<stdio.h>
void main(){
	int y,d,w,Y,W;
	printf("Enter Days=");
	scanf("%d",&d);
	y=d/365;
	Y=d%365;
	w=Y/7;
	W=Y%7;
	d=W;
	printf("%d %d %d",y,W,d);
}
