#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
	char *ptr;
	ptr = (char*)malloc(20*sizeof(char*));
	strcpy(ptr,"Ismet Goksel OZDEMIR");
	printf("%s",ptr);
	return 0;

}
