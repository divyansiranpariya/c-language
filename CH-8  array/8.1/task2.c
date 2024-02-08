
#include<stdio.h>
main()
{
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	
	int a[n],i,average,sum=0;
	
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
       printf("ar[%d]=",i+0);
		scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("\n");
	average=sum/n;
	printf("average of array: %d",average);
}

