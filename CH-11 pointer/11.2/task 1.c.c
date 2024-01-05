#include<stdio.h>
main(){
	int ar[10],i,a;
	int *ptr;
	ptr=&ar[i];
	printf("enter the value=");
	scanf("%d",&a);
	printf("enter the element\n");
	for(i=0;i<a;i++){
		printf("ar[%d]",i);
		scanf("%d",&ar[i]);
	}
	ptr=&ar[i-1];
	printf("reversed element");
	for(i=a;i>0;i--)
	{
		printf("%d",*ptr);
		ptr--;
	}
}
