#include<stdio.h>
#define size 100
int main(){
	char array[size];
	char *ptr;
	int i=0;
	printf("lutfen bir dizi giriniz\n");
	gets(array);
	ptr=array;
	while(*ptr!=NULL) i++,ptr++;
	printf("The lenght of the string that you entered is %d",i);
	return 0;
}
