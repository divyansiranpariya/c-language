#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter row size:");
	scanf("%d",&r);
	printf("enter column size:");
	scanf("%d",&c);
	
	int a[r][c],i,j,k=0;
	int sum=0;
	int average;
	
	printf("enter the array elemnt:\n");
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<c;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=a[i][j];
            k++;
	}
} 
	
average=sum/k;

printf("Average of an Array:%d",average);
	
}
