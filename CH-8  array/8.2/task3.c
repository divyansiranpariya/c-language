#include<stdio.h>
main()
{
		int n,i,sqr;
	printf("enter array size:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("enter array elemnts:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+0);
scanf("%d",&a[i]);
	}
		printf("\n");
	printf("square of each element:");
	for(i=0;i<n;i++)
	{
	sqr=a[i]*a[i];
	printf("%d ",sqr);
	}

}
