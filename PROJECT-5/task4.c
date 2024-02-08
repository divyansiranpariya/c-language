#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter array size:");
	scanf("%d",&r);
	printf("enter column size:");
	scanf("%d",&c);
	
int	a[r][c],i,j,row,column,sum=0;

	printf("enter arrray's element:\n");
		
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
		printf("enter row numbers:");
		scanf("%d",&row);
		
        if (row>=0&&row<r)
		  {
        printf("Elements of row %d:",row);
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[row][j]);
               sum+=a[row][j];
        }
        printf("\n");
        printf("sum of row: %d",sum);
        
		printf("\n");
		
		sum=0;
		printf("enter column numbers:");
		scanf("%d",&column);
		
		if (column>=0&&column<c)
		  {
        printf("Elements of column %d: ",column);
        for (i=0;i<r;i++)
		 {
            printf("%d ",a[i][column]);
            sum+=a[i][column];
        }
        printf("\n");
         printf("sum of column: %d",sum);

	}
}
}
	
