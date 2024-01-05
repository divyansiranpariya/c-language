#include<stdio.h>
main(){
	int a,b,c,d;
	printf("enter of the first value:");
	scanf("%d",&a);
	printf("enter of the second value:");
	scanf("%d",&b);
	printf("enter of the third value:");
	scanf("%d",&c);
	printf("enter of the fourth value:");
	scanf("%d",&d);
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is maximum");
			}
			else{
				printf("d is maximum");
			}
		}
		else{
			if(c>d){
				printf("c is maximum");
			}
			else{
				printf("d is maximum");
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("b is maximum");
			}
			else{
				printf("d is maximum");
			}
		}
		else{
			if(c>d){
				printf("c is maximum");
			}
			else{
				printf("d is maximum");
			}
			
		}
	}
	
}
