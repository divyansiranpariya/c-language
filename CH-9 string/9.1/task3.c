#include<stdio.h>
main()
{
	char str[20],i;
	
	printf("enter a string:");
	scanf("%s",&str);
	
		for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		
		}
	
			
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
			
		}
	
	}
		printf("%s",str);	
	
}
