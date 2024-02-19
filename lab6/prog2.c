#include<stdio.h>
void main(){
	float basicSalary,HRA,DA,GrossSalary;
	printf("Enter basicSalary amount:");
	scanf("%f",&basicSalary);
	if(basicSalary>=10000){
		HRA=(0.20*basicSalary);
		DA=(0.80*basicSalary);		     
	}
	else if(basicSalary>=20000){
		HRA=(0.25*basicSalary);
		DA=(0.90*basicSalary);
	}
	else if(basicSalary>=30000){
	    HRA=(0.30*basicSalary);
		DA=(0.95*basicSalary);		
		}
	GrossSalary=basicSalary+HRA+DA;
    	printf("GrossSalary=%f",GrossSalary); 
}
