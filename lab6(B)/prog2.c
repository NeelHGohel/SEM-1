#include<stdio.h>
#include<math.h>
void main(){
	float root1,root2,d,a,b,c;
	printf("Enter value of a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-4*a*c;
if(d>0){
	root1=(-b+sqrt(d))/2*a;
	root2=(-b-sqrt(d))/2*a;
	printf("root1 & root2 of the equation is:%.2f %.2f",root1,root2);
}	
else if(d==0){
	root1=(-b/(2*a));
	printf("root of the equation is:%.2f",root1);
}
else if(d<0){
	float realPart=(-b/(2*a));
	float imgPart=sqrt(-d)/(2*a);
	printf("root1=%.2f+i%.2f,root2=%.2f-i%.2f",realPart,imgPart,realPart,imgPart);
}
}
