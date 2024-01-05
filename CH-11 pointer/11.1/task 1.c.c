#include<stdio.h>
int main(){
	int ar[5],i,*ptr[5],sqr;
	for(i=0;i<5;i++){
		printf("enter[%d]element:",i+1);
	scanf("%d",&ar[i]);
	}

	for(i=0;i<=4;i++) 
	{
		ptr[i]=&ar[i];	
	}
	
	for(i=0;i<5;i++){
	sqr=(*ptr[i]) * (*ptr[i]);

	printf("\nsquare of %d is %d",ar[i],sqr);
}
	return 0;
}
