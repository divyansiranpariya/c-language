#include<stdio.h>
main(){
	int s;
	float a,b,c,r,h,d,t;
	printf("enter your basic salary:");
	scanf("%d",&s);
	printf("enter your HRA:");
	scanf("%f",&a);
	printf("enter your DA:");
	scanf("%f",&b);
	printf("enter your TA:");
	scanf("%f",&c);
	h=s*a/100;
	d=s*b/100;
	t=s*c/100;
	r=s+h+d+t;
	printf("total rupees is %f:",r);
	
}
