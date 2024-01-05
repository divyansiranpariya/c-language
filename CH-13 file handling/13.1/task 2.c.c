#include<stdio.h>
void main()
{
	FILE *ptr;
	int i;
	ptr=fopen("div.txt","w");

	
	if(ptr==NULL)
	{
		printf("file cannot created or opened");
	}
	else
	{
		printf("file can created or opened successfully");
		
		for(i=1;i<=50;i++)
		{
		if(i%3==0 && i%5==0)
		
					fprintf(ptr," divisable by 3 and 5 =%d\n",i);
		}
	}
}
