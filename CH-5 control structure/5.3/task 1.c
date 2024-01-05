#include<Stdio.h>
main(){
	int a,b,c;
	printf("enter a number a:");
	scanf("%d",&a);
	printf("enter a number b:");
	scanf("%d",&b);
	printf("enter a number c:");
	scanf("%d",&c);
	
	(a<b)
	?(a<c)
	?printf("a is minimum:%d",a)
	:printf("c is minimum:%d",b)
	:(b<c)
	?printf("b is minimum:%d",b)
	:printf("c is minimum:%d",c);
}
