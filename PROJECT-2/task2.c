#include<stdio.h>
main(){
	float u,p,total,a;
	printf("enter electicity units:");
	scanf("%f",&u);
	printf("\n");
if(u<=50){
	p=u*0.5;
}	
else if(u<=150){
	p=25+(u-50)*0.75;
}
else if(u<=250){
	p=100+(u-150)*1.20;
}
else{
	p=220+(u-250)*1.50;
}
total=p*0.20;
a=p+total;
printf("Electricity Bill =%.2f",a);
	
}
