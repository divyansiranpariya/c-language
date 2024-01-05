#include<stdio.h>
main(){
	FILE *ptr,*fp;
	char ch;
	ptr=fopen("welcome.txt","r");
	fp=fopen("file.txt","w");
	while(78){
		ch=getc(ptr);
		if(ch==EOF)
		break;
		
	putc(ch,fp);
	}
	puts("the first file");
}
