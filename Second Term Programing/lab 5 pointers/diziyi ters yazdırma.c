#include<stdio.h>
#include<string.h>
#define size 100
int main(){
	char array[size];
	char *ptr;
	int i=0;
	int a;
	printf("lutfen bir dizi giriniz\n");
	gets(array);
	ptr=array;
	while(*ptr!=NULL) i++,ptr++;
    ptr--;
    for(a=0;a!=i;a++){
    	printf("%c",*(ptr-a));
	}
	return 0;
}
