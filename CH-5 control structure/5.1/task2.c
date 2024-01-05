#include<stdio.h>
main(){
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a>=0){
		printf("this is positive number");
	}
	else if(a<=0){
		printf("this is nagative number");
		
	}
	else{
		printf("this is neutral number");
	}
}

