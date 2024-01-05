#include<stdio.h>
swap(int *a,int*b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
 main(){
	int a,b;
    //a=10;	
	//b=20;
	printf("enter any two numbers\n");
	scanf("%d %d",&a,&b);
	printf("a= %d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}
