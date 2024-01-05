#include<stdio.h>
main(){
	int s,e,i;
		printf("enter starting number:");
	scanf("%d",&s);
		printf("enter ending number:");
	scanf("%d",&e);
	while(s<=e){
	if(s%4==0 || s%400==0 && s%100!=0)
	
	printf("%d\n",s);
	s++;
	}
}
