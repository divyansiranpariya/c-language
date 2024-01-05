#include<stdio.h>
main(){
	float a,b,c,sum;
	printf("enter first angle:");
	scanf("%f",&a);
	printf("enter second angle:");
	scanf("%f",&b);
	sum=a+b;
	c=180-sum;
	printf(" third angle is %f:",c);
}
