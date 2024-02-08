#include<stdio.h>
main(){
	char str[25];
	int i,len=0,j;
	
	printf("enter the string:");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	len++;
	
	i=0;
	j=len-1;
	while(i<j)
	{
		if(str[i]!=str[j])
		break;
		
		i++;
		j--;
	}
	if(i>=j)
	{
		printf("string is palidrome:");
		
	}
	else{
		printf("string is not palidrome:");
	}
}
