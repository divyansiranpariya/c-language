#include<stdio.h>
main()
{
	int r;
	
	printf("enter array row & column size:");
	scanf("%d",&r);
	
	int a[r][r],i,j;
	
	printf("enter arrray's element:\n");
		
		for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("enter arrray's element:\n");
		
		for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
	printf(  " %d",a[j][i]);
		}
		printf("\n");
	}
}
