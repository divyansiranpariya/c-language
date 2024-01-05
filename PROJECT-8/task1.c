#include<stdio.h>
	char str[29],*ptr[29],i;
	int count=0;
	printf("enter a string==");
	gets(str);
	ptr[i]=&str[i];
	for(i=0;str!='\0';i++){
		count++;
	}
	printf("length of is  %d",count);
}
