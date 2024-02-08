#include<stdio.h>
main(){
	int i,j,s,k=5;
	
	for(i=0;i<k;i++)
	{
		for(s=1;s<k-(i-1);s++)
	{
		printf(" ");
	}
	for(j=0;j<=2*i+1;j++)
	{
		printf("*");
	}
	printf("\n");
}
}
