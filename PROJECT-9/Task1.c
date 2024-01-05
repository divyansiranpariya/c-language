#include<stdio.h>
struct stud{
	int r,c,m,p,total;
	char name[10];
	float per;
};
main(){
	int d,i;
	struct stud s[i];
	for(d=0;d<5;d++){
		printf("enter details of student %d :\n",d+1);
		printf("rool no=>");
		scanf("%d",&s[d].r);
		printf("name=>");
		scanf("%s",&s[d].name);
		printf("chemistry=>");
		scanf("%d",&s[d].c);
		printf("mathematic=>");
		scanf("%d",&s[d].m);
		printf("physics=>");
		scanf("%d",&s[d].p);
		s[d].total=s[d].c+s[d].m+s[d].p;
	   s[d].per=s[d].total/3;
		printf("\n");
	}
	for(d=0;d<5;d++){
		printf("%s (%d)\n",s[d].name,s[d].r);
				printf("chemistry=>%d\n",s[d].c);
					printf("mathematics=>%d\n",s[d].m);
						printf("physics=>%d\n",s[d].p);
	                    printf("total=>%d/300\n",s[d].total);
	                    printf("percentage=>%.2f%%\n",s[d].per);
							printf("\n");
	}
	printf("\n");
}
