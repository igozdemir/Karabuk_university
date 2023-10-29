#include<stdio.h>
#include<string.h>
int main(){
	char array1[100];
	char array2[100];
	printf("lutfen ilk arrayi giriniz\n");
	gets(array1);
	printf("lutfen ikinci arrayi giriniz\n");
	gets(array2);
	int boyut=0;
	boyut=strcmp(array1,array2);
	if(boyut>0){
		printf("ilk array daha buyuktur");
	}
	else if(boyut<0){
		printf("ikinci array daha buyuktur");
	}
	else{
		printf("arraylerin ayni uzunluktadir");
	}
	return 0;
}
