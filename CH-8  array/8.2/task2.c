#include<stdio.h>
main()
{
	int f,s,i;
	printf("enter the first element :");
	scanf("%d",&f);
	printf("enter the second element :");
	scanf("%d",&s);
	
int a[50],k=0;

	for(i=f;i<=s;i++)
	{
		if(i%2==0)
		{
		 a[k]=i;
        k++; 	
        
		}	
	}
 printf("The array elements are: ");
    for (i=0;i<k;i++) {
        printf("%d ",a[i]);
    }
}
