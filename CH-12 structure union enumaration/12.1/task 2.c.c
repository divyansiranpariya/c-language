#include<stdio.h>
struct employ{
	int id,age;
	char name[20],role[14],city[10],company[30],ex[15];
};
main(){
	int i,d;
	printf("how many employ in your company");
	scanf("%d",&i);
	struct employ emp[i];
	for(d=0;d<i;d++){
		printf("enter your id:");
		scanf("%d",&emp[d].id);
		printf("enter your name:");
		scanf("%s",&emp[d].name);
		printf("enter your age:");
		scanf("%d",&emp[d].age);
		printf("enter your role:");
		scanf("%s",&emp[d].role);
		printf("enter your city:");
		scanf("%s",&emp[d].city);
		printf("enter your experience:");
		scanf("%s",&emp[d].ex);
		printf("enter your company name:");
		scanf("%s",&emp[d].company);
		}
		for(d=0;d<i;d++){
		printf("id=%d\n",emp[d].id);
		printf("\nname=%s\n",emp[d].name);
		printf("age=%d\n",emp[d].age);
    	printf("role=%s\n",emp[d].role);
		printf("city=%s\n",emp[d].city);
		printf("experience=%s\n",emp[d].ex);
		printf("company=%s\n",emp[d].company);		
		}
}
