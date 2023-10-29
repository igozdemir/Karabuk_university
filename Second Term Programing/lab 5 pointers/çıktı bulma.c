#include<stdio.h>
int main(){
	int var=10;
	int *p;
	p= &var;
	
	printf("1 Adress of var is: %p", &var);
	printf("\n2 Adress of var is: %p", p);
	
	printf("\n3 Value of var is: %d", var);
	printf("\n4 Value of var is: %d", *p);
	printf("\n5 Value of var is: %d", *( &var));
	
	printf("\n6 Value of pointer p  is: %p", p);
	printf("\n7 Adress of pointer p is: %p", &p);
	
	return 0;
	/*
	1 2
	2 2
	
	3 10
	4 10 
	5 10
	
	6 2
	7 2
	*/
}
