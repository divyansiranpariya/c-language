#include<stdio.h>
main(){
	int x,y,z;
	printf("enter x&y value:");
	scanf("%d %d",&x,&y);
	printf("x=%d y=%d\n",x,y);
	z=x*x+2*x*y+y*y;
	printf("answer is=%d",z);
}
