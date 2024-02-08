#include<stdio.h>
main()
{
	int n,p,i;
	printf("enter A array size:");
	scanf("%d",&n);

	int a[n],b[p],c[50],k;
	
		printf("enter array elemnts:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i+0);
        scanf("%d",&a[i]);
       c[i]=a[i];
	}
	k=i;
	printf("enter B array size:");
	scanf("%d",&p);
	
		printf("enter array elemnts:\n");
	for(i=0;i<p;i++)
	{
			printf("b[%d]",i+0);
            scanf("%d",&b[i]);
            c[k]=b[i];
            k++;
	}
	printf("\n");
	printf("array c is:");
	for(i=0;i<k;i++)
	{
		printf(" %d",c[i]);
	}
}
