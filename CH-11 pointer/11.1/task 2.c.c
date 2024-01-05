#include<stdio.h>
int main(){
	int a=10,b=20,temp;
	int *x,*y;
	x=&a;
	y=&b;
	printf("before swapiing\n");
	printf("a= %d b= %d\n",a,b);
	temp=*x;
	*x=*y;
	*y=temp;
	printf("after swapping\n");
	printf("\n a=%d b=%d",*x,*y);
	return 0;
}
