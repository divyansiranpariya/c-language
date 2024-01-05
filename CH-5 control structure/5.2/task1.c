#include<stdio.h>
main(){
	int a,b,c;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("minimum value is %d:",a);
			}
			else
			printf("minimum value is%d:",b);
	}
	else
	{
		if(b<c){
			printf("minimum value is %d:",b);
		}
		else
		{
			printf("minimum value is %d:",c);
		}
	}
}


