#include<stdio.h>
main(){
	int f=1,i,n;
	printf("enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		f=f*i;
	}
	printf("%d\n",f);
	
}
