#include<stdio.h>
main(){
	int choice,ch;
	printf("press 1 for english\n");
		printf("press 2 for hindi\n");
			printf("press 3 for gujarati\n");
			printf("\n");
			printf("enter your choice:");
			scanf("%d",&ch);
			printf("\n");
			switch(ch){
				case 1:
					printf("your language is english\n\n");
					
				
						printf("press 1 for internet recharge\n");
					printf("press 2 for top-up recharge\n");
					printf("press 3 for special recharge\n");
					printf("\n");
					printf("enter your choice:");
					scanf("%d",&choice);
					printf("\n");
					switch(choice){
						case 1:
							printf("your internet recharge sucessful");
							break;
								case 2:
							printf("your top-up recharge sucessful");
							break;
							
								case 3:
							printf("your special recharge sucessful");
							break;
							
					}	
					break;
					case 2:
					printf("your language is hindi\n\n");
					printf("internet recharge ke liye 1 dabaiye\n");
							printf("top-up recharge ke liye 2 dabaiye\n");
									printf("special recharge ke liye 3 dabaiye\n");
									printf("\n");
					printf("enter your choice:");
					scanf("%d",&choice);
					printf("\n");
					switch(choice){
						case 1:
							printf("your internet recharge sucessful");
							break;
								case 2:
							printf("your top-up recharge sucessful");
							break;
							
								case 3:
							printf("your special recharge sucessful");
							break;
							
					}	
					
					break;
					case 3:
					printf("your language is gujarati\n\n");
					
					printf("internet recharge mate 1 dabavo\n");
				
					printf("top-up recharge mate 2 dabavo\n");
					printf("special recharge mate 3 dabavo\n");
					printf("\n");
					printf("enter your choice:");
					scanf("%d",&choice);
					printf("\n");
					switch(choice){
						case 1:
							printf("your internet recharge sucessful");
							break;
								case 2:
							printf("your top-up recharge sucessful");
							break;
							
								case 3:
							printf("your special recharge sucessful");
							break;
							
					}	
					
				
					break;
			}
}
