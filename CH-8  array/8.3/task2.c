#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter array size:");
	scanf("%d",&r);
	printf("enter column size:");
	scanf("%d",&c);
	
	int a[r][c],ar[r][c],array[r][c];
	int i,j;
	
		printf("enter the array A element:\n");
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<c;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
		printf("enter the array AR element:\n");
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<c;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
printf("array is:\n");
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<c;j++)
		{
			array[i][j]=a[i][j]+ar[i][j];
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}

	
	

}
