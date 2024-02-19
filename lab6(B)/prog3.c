#include<stdio.h>
void main(){
	float a,b,c;
	printf("Enter value of a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
if(a==b && b==c){
	printf("Triangle is Equilateral");
}	
else if(a==b || b==c || a==c){
	printf("Triangle is isosceles");
}
else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b)){
	printf("Triangle is Right angled");
}
else{
	printf("Triangle is scalene");
}
}
