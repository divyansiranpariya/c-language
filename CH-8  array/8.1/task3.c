#include<stdio.h>
main()
{
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	
	int a[n],ar[n],arr[n],i;
	
	printf("enter array a's elements:\n");
	for(i=0;i<n;i++)
	{
		printf("ar[%d]=",i+0);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("enter array ar's elements:\n");
		for(i=0;i<n;i++)
	{
     	printf("ar[%d]=",i+0);
		scanf("%d",&ar[i]);
	}
		printf("\n");
		printf("array is:");
	for(i=0;i<n;i++)
	{
		arr[i]=a[i]+ar[i];
			printf(" %d ",arr[i]);
	}
}
