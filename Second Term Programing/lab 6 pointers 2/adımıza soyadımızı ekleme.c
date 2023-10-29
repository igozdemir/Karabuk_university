#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
	char *ptr;
	ptr = (char*)malloc(13*sizeof(char*));
	strcpy(ptr,"Ismet Goksel");
	ptr=(char*)realloc(ptr,20*sizeof(char*));
	strcat(ptr," OZDEMIR");
	printf("%s",ptr);
	free(ptr);
	return 0;
}
