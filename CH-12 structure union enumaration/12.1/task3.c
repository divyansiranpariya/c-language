#include<stdio.h>
struct stud{
	int id,std,age;
	char name[20],crs[15],sch[18];
	
};
main(){
	int i,d,ch,n,c,a;
	struct stud s[d];
	printf("how many student in your class");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("enter your id:");
		scanf("%d",&s[i].id );
		printf("enter your name:");
		scanf("%s",&s[i].name );
		printf("enter your age:");
		scanf("%d",&s[i].age );
		printf("enter your std:");
		scanf("%d",&s[i].std );
		printf("enter your course:");
		scanf("%s",&s[i].crs );
		printf("enter your school:");
		scanf("%s",&s[i].sch );
		printf("\n");
	}
	
	printf("press 1 for id login\n");
		printf("press 2 for age login\n");
		printf("press 3 for standard login\n");
	
	printf("enter your choice:");
	scanf("%d",&ch);
	printf("\n");
	switch(ch){
		case 1:
			printf("your choice is id login...");
			
			printf("enter your choice id:");
			scanf("%d",&c);
			for(i=0;i<=n;i++){
				if(s[i].id==c){
					printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
					
				}
			}
			break;
			
			case 2:
				printf("your choice is age login...");
				printf("press 1 for eqalto age :");
				printf("press 2 for greater than age :");
				printf("press 3 for less than age :");
			
			printf("enter your choice age:");
			scanf("%d",&a);
			switch(a){
				case 1:
					for(i=0;i<=n;i++){
						if(s[i].age ==18){
							printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
						}
					}
					break;
					
					case 2:
						for(i=0;i<=n;i++){
						if(s[i].age>=18){
							printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
						}
					}
					break;
					case 3:
						for(i=0;i<=n;i++){
						if(s[i].age<=18){
							printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
						}
					}
					break;
			}
			
			break;
			
			case 3:
				printf("your choice is standard login....");
				
				printf("press 1 for eqalto std :");
				printf("press 2 for greater than std :");
				printf("press 3 for less than std:");
				
				
				printf("enter your choice standard:");
				scanf("%d",&a);
				switch(a){
					case 1:
						for(i=0;i<=n;i++){
						if(s[i].std==10){
							printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
						}
					}
					break;
					
					case 2:
						for(i=0;i<=n;i++){
						if(s[i].std>=18){
							printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
						}
					}
					break;
					
					case 3:
						for(i=0;i<=n;i++){
						if(s[i].std<=18){
							printf("id:%d\n",s[i].id );
					printf("Name:%d\n",s[i].name );
					printf("age:%d\n",s[i].age );
					printf("standard:%d\n",s[i].std );
					printf("course:%s\n",s[i].crs);
					printf("school:%s\n",s[i].sch);
						}
					}
					break;
				}
				break;	
				default:
					printf("invlid choice:");
				
			
	}
	
}
