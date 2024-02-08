#include<stdio.h>
main(){
	char s[150];
	int i,count[250]={0};
	
	printf("enter a string:");
	gets(s);
	
	for(i=0;s[i];i++)
	{
	count[s[i]]++;
	}
	
	printf("character frequency\n");
	for(i=0;s[i];i++)
	{
		if(count[s[i]]!=0)
		{
			printf("%c--> %d\n",s[i],count[s[i]]);
			count[s[i]]=0;
		}
	}
}
