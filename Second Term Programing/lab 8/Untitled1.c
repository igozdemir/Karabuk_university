#include<stdio.h>
int main(){
	struct birthday{
	    char name[30];
	    int lenght;
	    struct{
	    	int year,month,day;
		}borninformation;
	}person;
	printf("your name : ");
	gets(person.name);
	printf("\nyour lenght : ");
	scanf("%d",&person.lenght);
	printf("\nyour birthday : ");
	scanf("%d.%d.%d",&person.borninformation.day,&person.borninformation.month,&person.borninformation.year);
	printf("\nentered information : \n");
	printf("name : %s\n",person.name);
	printf("lenght : %d\n",person.lenght);
	printf("Birthday : %d.%d.%d",person.borninformation.day,person.borninformation.month,person.borninformation.year);
	return 0;

	
} 
