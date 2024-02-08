#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter array size:");
	scanf("%d",&r);
	printf("enter column size:");
	scanf("%d",&c);
	
	int a[r][c],i,j,l;
	
	printf("enter arrray's element:\n");
		
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	l=a[0][0];
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>l)
			l=a[i][j];
		}
	}
	printf("largest number is: %d",l);
}
