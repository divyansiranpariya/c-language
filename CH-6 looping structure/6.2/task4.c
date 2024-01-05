#include<stdio.h>
main(){
	int f=0,s=1,t,i,n;
	printf("enter number:");
	scanf("%d",&n);
	printf("%d %d",f,s);
	for(i=1;i<=n;i++){
	
	t=f+s;
	printf("%d  ",t);
	f=s;
	s=t;
}
}
