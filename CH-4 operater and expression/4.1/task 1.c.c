#include<stdio.h>
main(){
	int a,b,c;
	printf("enter any two numbers:");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("swap value is %d %d",a,b);
}
