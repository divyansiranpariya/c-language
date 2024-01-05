#include<stdio.h>
struct stud{
	int id,age,standard;
	char name[25],course[10],city[10],school[20];
};
main(){
	struct stud s1,s2,s3;
s1.id=3421;
strcpy(s1.name,"jiya");
s1.age=18;
strcpy(s1.course,"english");
strcpy(s1.city ,"rajkot");
s1.standard=9;
strcpy(s1.school,"skv");

	printf("Id=%d\n",s1.id);
	printf("name=%s\n",s1.name);
	printf("age=%d\n",s1.age);
	printf("course=%s\n",s1.course);
	printf("city=%s\n",s1.city);
	printf("standard=%d\n",s1.standard);
	printf("school=%s\n",s1.school);
	printf("\n");
	
	
	s2.id=4532;
strcpy(s2.name,"diya");
s2.age=15;
strcpy(s2.course,"science");
strcpy(s2.city ,"surat");
s2.standard=11;
strcpy(s2.school,"skv");

	printf("Id=%d\n",s2.id);
	printf("name=%s\n",s2.name);
	printf("age=%d\n",s2.age);
	printf("course=%s\n",s2.course);
	printf("city=%s\n",s2.city);
	printf("standard=%d\n",s2.standard);
	printf("school=%s\n",s2.school);
	printf("\n");
	
	
	s3.id=7654;
strcpy(s3.name,"niya");
s3.age=17;
strcpy(s3.course,"flutter");
strcpy(s3.city ,"baroda");
s3.standard=12;
strcpy(s3.school,"skv");

	printf("Id=%d\n",s3.id);
	printf("name=%s\n",s3.name);
	printf("age=%d\n",s3.age);
	printf("course=%s\n",s3.course);
	printf("city=%s\n",s3.city);
	printf("standard=%d\n",s3.standard);
	printf("school=%s\n",s3.school);
}
