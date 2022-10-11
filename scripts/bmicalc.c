#include<stdio.h>
int main()
{
	float hgt;
	float wgt;
	printf(" . .... ..... Simple BMI Calculator ..... .... .\n\n   Enter your height(in cms.)  :  ");
	scanf("%f",&hgt);
	printf("\n   Enter your weight(in kg)  :  ");
	scanf("%f",&wgt);
	
	float bmi = wgt/(hgt*hgt)*10000;
	
	printf("\n   Your Body Mass Index (BMI) is : %f \n\n",bmi);
	printf("\n \n");
	
	if (bmi<18.5){
		printf("   You are Underweight.\n\n   Advice : \n •Eat more frequently.\n •Exercise\n •Choose Nutrient-rich food\n");
	}
	if (bmi>=18.5 & bmi <25){
		printf("   You are normal and healthy.\n");
	}
	if (bmi>=25 & bmi<30){
		printf("   You are overweight.\n\n   Advive :\n •Drink coffee and tea.\n •Eat soluble fiber.\n •Avoid Sugary and fruit juice.\n •Drink water before meals.\n");
	}
	if (bmi>=30){
		printf("   You are obese.\n   \n\n   Advice :\n •Engage in regular physical activity and exercise.\n •Stay positive\n");
	}
	printf("\n\n\n");
	return 0;
}
