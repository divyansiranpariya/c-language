#include<stdio.h>
main()
{
	int ar[7],i,length=0;
	
	printf("enter array elements:\n ");
	for(i=0;i<7;i++)
	{
		printf("ar[%d]=",i+0);
		scanf("%d",&ar[i]);
		
	}
		for(i=0;i<7;i++)
	{
		length++;

	}
	printf("\n");
	printf("Length of array: %d",length);
}
