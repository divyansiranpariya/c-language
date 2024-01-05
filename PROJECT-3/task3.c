#include<stdio.h>
main(){
	int f,l,sum=0,n;
	  
	  printf("enter any number:");
	  scanf("%d",&n);
	  
	  l=n%10;
	  f=n;
	  while(f>10)
	  {
	  	f=f/10;
	  }
	  sum=f+l;
	  printf("total sum is:%d",sum);
}
