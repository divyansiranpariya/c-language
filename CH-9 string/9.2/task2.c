#include<stdio.h>
main(){
	
	char email[20]={"anshi22@gmail.com"};
	char pass[20]="12345";
	char em[20];
	char pwd[20];
	
	
	printf("enter email:");
	gets(em);
		printf("enter password:");
	scanf("%d",&pwd);
	
if(	strcmp(em,email)==0 &&strcmp(pwd,pass)==0)	{
	printf("login successful:");
}
else{
	printf("Login Failed. Invalid Credentials.");
}
}
