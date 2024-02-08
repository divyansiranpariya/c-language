#include<stdio.h>
main(){
	
	int r;
	
printf("enter the array's row&column size:");
scanf("%d",&r);
  
             int a[r][r],i,j;
             int sum=0;
    printf("enter the array elemnt:\n");
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<r;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<r;j++)
		{
				if(i==j)
				{
					sum+=a[i][j];
					
				}
			
		}
	}
	printf(" the sum of diagonal elemnts of array:%d",sum);
}

