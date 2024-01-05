#include<stdio.h>
main(){
	int x,y,z,w;
	printf("enter x&y&z value:");
	scanf("%d %d %d",&x,&y,&z);
	printf("x=%d y=%d z=%d\n",x,y,z);
	w=x*2+y*2+z*2+2*x*y*+2*y*z+2*z*x;
	printf("answer is=%d",w);
}
