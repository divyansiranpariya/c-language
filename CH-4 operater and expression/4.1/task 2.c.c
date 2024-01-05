#include<stdio.h>
main(){
	int a,b;
	printf("enter any two numbers:");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap value is %d %d",a,b);
}
