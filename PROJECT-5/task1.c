#include<stdio.h>
main(){
	int n;
	
	printf("enter array elements size:");
	scanf("%d",&n);
	printf("\n");
	
	int a[n],i;
	printf("enter the elements:\n ");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+0);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	printf("Negative elements from an array:");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf(" %d",a[i]);
		}
	}
	
	
}
