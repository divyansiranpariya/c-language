#include<stdio.h>
main(){
	int a,b;
	printf("enter first value:");
	scanf("%d",&a);
	printf("enter second value:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("minimum value is %d",a);
	}
  else{
     printf("minimum value is %d",b);
	}
}
