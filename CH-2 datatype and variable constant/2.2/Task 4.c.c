#include<stdio.h>
main(){
	float p,r,n,i;
	printf("enter a principal amount:");
	scanf("%f",&p);
	printf("enter a rate:");
	scanf("%f",&r);
	printf("enter a time:");
	scanf("%f",&n);
	i=p*r*n/100;
	printf("area of triangle is %f:",i);
}
