#include<stdio.h>
main(){
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	i=1;
	do{
		if(i%2==0)
		printf("%d\n",i);
		i++;
		
	}while(i<=n);
}
