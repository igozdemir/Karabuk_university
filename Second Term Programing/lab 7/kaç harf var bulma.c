#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
	char array[100];
	char *ptr;
	int i;
	printf("lutfen bir array giriniz\n");
	gets(array);
	i=strlen(array);
	ptr=array;
	ptr=(char*)malloc((i+1)* sizeof(char));
	int a;
	int kucuk=97;
	int buyuk=65;
	for(a=0;a<26;a++){
		i=strlen(array);
		int sayi=0;
		for(i;i!=0;i--){
			if(array[i-1]==buyuk || array[i-1]==kucuk){
				sayi++;
			}
		}
		if(sayi>0){
			printf("%d adet %c veya %c \n",sayi,kucuk,buyuk);
		}
		kucuk++;
		buyuk++;
	}
	free(array);
	return 0;
}

