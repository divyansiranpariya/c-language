#include<stdio.h>
main(){
             int a[5][5],i,j;
            
    printf("enter the array element:\n");
	for(i=0;i<5;i++)
	{
	
		for(j=0;j<5;j++)
		{
				printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
	}
	}
	
	 printf("Boundary elements:\n");
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            if (i==0||i== 4||j==0||j==4) {
                printf("%d ",a[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

	}
