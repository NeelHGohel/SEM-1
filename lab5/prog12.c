#include<stdio.h>
void main(){
	int R,r,s,m,h;
	printf("Enter seconds=");
	scanf("%d",&s);
	h=s/3600;
	r=s%3600;
	m=r/60;
	R=r%60;
	s=R;
	printf("%2d:%2d:%2d",h,m,s);
}
