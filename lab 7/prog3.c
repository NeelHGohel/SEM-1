#include<stdio.h>
void main()
{
    char op;
	printf("Enter operator:");
	scanf("%c",&op);
	int a,b;
	printf("Enter two no.:");
	scanf("%d %d",&a,&b);	
	switch(op){
	
	case ('+'):
		printf("Addition=%d",a+b);
		break;
	
	case ('-'):
	    printf("subtraction=%d",a-b);
		break;
		
	case ('*'):
	    printf("Multiplication=%d",a*b);
		break;
	
	case ('/'):
	if(b!=0){
		printf("Division=%d",a/b);		
	}
	else{	
		printf("can not divide by 0");
}
    default:
    	printf("Invalid operator");
    	break;
}
}
