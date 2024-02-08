#include<stdio.h>
main(){
	
	char pass[25];
	int i,cap=0,len,num=0,s1=0,s2=0,s3=0;
	
	printf("enter password:");
	gets(pass);
	
	len=strlen(pass);
	for(i=0;i<len;i++){
		if(pass[i]>=65&&pass[i]<=90)
		{
			cap=1;
		}
		else if(pass[i]>=48&&pass[i]<=57)
		{
			num=1;
		}
			else if(pass[i]>=33&&pass[i]<=47)
		{
			s1=1;
		}
			else if(pass[i]>=123&&pass[i]<=126)
		{
			s2=1;
		}
			else if(pass[i]>=91&&pass[i]<=96)
		{
			s3=1;
		}
	}
	
	if(cap==1&&num==1&&(s1==1||s2==1||s3==1)&&len>=6)
	{
		printf("your password is strong:");
	}
	else{
		printf("your password is not strong:");
	}
}
