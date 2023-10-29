#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
	char *ptr;
	int i,c,a;
	printf("lutfen yazacaginiz arrayin buyuklugunu giriniz\n");
	scanf("%d",&i);
	ptr=(char*) malloc(i*sizeof(char*));
	printf("lutfen bir karakter arrayi giriniz\n");
	fflush(stdin);
    fgets(ptr, i, stdin);
	for(ptr;*ptr!='\0';ptr++) c++;
	ptr--;
	for(a=0;a<c;ptr--,a++){
		printf("%c", *ptr);
	}
	free(ptr);
	return 0;
}
